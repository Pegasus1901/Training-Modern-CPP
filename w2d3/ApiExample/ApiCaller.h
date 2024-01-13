#ifndef APICALLER_H
#define APICALLER_H
#include<curl/curl.h>
#include<iostream>
#include<memory>
#include"Response.h"


class ApiCaller
{
private:
    CURL*_curl_session_object_handle{nullptr};
    const char* _end_point{nullptr};
    std::shared_ptr<Response> _response;
    std::string _request_header{""};
public:
    ApiCaller(std::string url);
    ApiCaller(std::string url,std::string header);


    // ApiCaller(std::string url,std::string header);.....when we want to request the api


    // ApiCaller(std::string url,std::string response,long status,double time,std::string header);

    
    ApiCaller(ApiCaller&)=delete;

    ApiCaller(ApiCaller&&)=delete;

    ApiCaller operator=(ApiCaller&)= delete;

    ApiCaller operator=(ApiCaller&&)=delete;

    bool InitlizeSession();

    void ExecuteApiCall();

    

    ~ApiCaller()=default;

    std::shared_ptr<Response> response() const { return _response; }

    friend std::ostream &operator<<(std::ostream &os, const ApiCaller &rhs);
};

#endif // APICALLER_H
