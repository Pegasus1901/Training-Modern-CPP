#ifndef RESPONSE_H
#define RESPONSE_H
#include<iostream>

class Response
{
private:
    std::string _response{""};
    long _response_status_code{0L};
    double _elapsed_time_since_execution{0.0};
public:
    Response()=default;

    Response(Response&)=delete;

    Response(Response&&)=delete;

    Response operator=(Response&)= delete;

    Response operator=(Response&&)=delete;
    
    ~Response()=default;

    //
    // std::string* responseStringLocation() const {return &_response;}.....could work but big solution
    

    std::string response() const { return _response; }

    long responseStatusCode() const { return _response_status_code; }

    double elapsedTimeSinceExecution() const { return _elapsed_time_since_execution; }
};

#endif // RESPONSE_H
