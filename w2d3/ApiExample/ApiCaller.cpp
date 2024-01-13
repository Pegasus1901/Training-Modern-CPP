#include "ApiCaller.h"
std::ostream &operator<<(std::ostream &os, const ApiCaller &rhs)
{
    os << "_end_point: " << rhs._end_point
       << " _response: " << rhs._response;
    return os;
}

ApiCaller::ApiCaller(std::string url)
    : _end_point(url.c_str()),
    _curl_session_object_handle(curl_easy_init())
{
}

ApiCaller::ApiCaller(std::string url, std::string header)
:ApiCaller(url)
{
    _request_header=header;
}

// we initilized the init inside the constructor so we dont need to create this function
// the initlization is done to avoid the extra space taken by the function

bool ApiCaller::InitlizeSession()
{
    _curl_session_object_handle = curl_easy_init();
    return _curl_session_object_handle;
}

void ApiCaller::ExecuteApiCall()
{
    curl_easy_setopt(_curl_session_object_handle , CURLOPT_WRITEFUNCTION, [](void *ptr, size_t size, size_t nmemb, std::string* data) 
    {data->append((char*) ptr, size * nmemb);
    return size * nmemb;});

    curl_easy_setopt(_curl_session_object_handle, CURLOPT_WRITEDATA, &(_response->response()));

    curl_easy_setopt(_curl_session_object_handle, CURLOPT_URL, _end_point);
    
    
    curl_easy_perform(_curl_session_object_handle);
}
