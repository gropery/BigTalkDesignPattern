#include "request.h"

Request::Request()
{

}

void Request::SetRequestType(string requestType)
{
    _requestType = requestType;
}

string Request::GetRequestType()
{
    return _requestType;
}


void Request::SetRequestContent(string requestContent)
{
    _requestContent = requestContent;
}

string Request::GetRequestContent()
{
    return _requestContent;
}

void Request::SetRequestNumber(int number)
{
    _number = number;
}

int Request::GetRequestNumber()
{
    return _number;
}
