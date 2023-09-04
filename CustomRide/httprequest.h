#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include <iostream>
#include <fstream>
#include <curl/curl.h>

using namespace std;

class httpRequest
{
public:
    httpRequest();
    ~httpRequest();
    size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *output);
    string response;
    CURL *curl;
    CURLcode res;
    struct curl_slist *headers;

};

#endif // HTTPREQUEST_H
