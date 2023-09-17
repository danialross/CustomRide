#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include <iostream>
#include <curl/curl.h>
#include <QLabel>

using namespace std;

class httpRequest
{
public:
    httpRequest();
    ~httpRequest();
    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *output);
    string getImageURL(string modelMake);
    void setImageURL(QString url,QLabel *label);

private:
    string response;
    CURL *curl;


};

#endif // HTTPREQUEST_H
