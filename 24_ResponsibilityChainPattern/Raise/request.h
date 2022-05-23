#ifndef REQUEST_H
#define REQUEST_H
#include <string>

using namespace std;

class Request
{
private:
    string _requestType;
    string _requestContent;
    int _number;

public:
    Request();
    void SetRequestType(string requestType);
    string GetRequestType();
    void SetRequestContent(string requestContent);
    string GetRequestContent();
    void SetRequestNumber(int number);
    int GetRequestNumber();
};

#endif // REQUEST_H
