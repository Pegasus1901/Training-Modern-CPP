#ifndef NORESPONSE_H
#define NORESPONSE_H

#include<iostream>

class NoResponse:public std::exception
{
private:
    char* _error_message{nullptr};
public:
    NoResponse()=default;

    NoResponse(char* msg):_error_message(msg) {}

    NoResponse(NoResponse&)=delete;

    NoResponse(NoResponse&&)=delete;

    NoResponse operator=(NoResponse&)= delete;

    NoResponse operator=(NoResponse&&)=delete;

    // all exceptions in the cpp use char * thts why we use char*
    const char*what() const noexcept{
        return _error_message;
    }
    
    ~NoResponse()=default;
};

#endif // NORESPONSE_H
