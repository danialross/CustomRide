#include "httprequest.h"
#include <string>
#include <cstring>

httpRequest::httpRequest()
{
    curl = curl_easy_init();
    if (!curl)
    {
        cerr << "Failed to initialize cURL" << std::endl;

    }
    headers = NULL;
    string api_key = "X-Api-Key: " + string(getenv("MY_API_KEY"));
    headers = curl_slist_append(headers, api_key.c_str());
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
}

httpRequest::~httpRequest(){
   curl_slist_free_all(headers);
    curl_easy_cleanup(curl);
}

size_t httpRequest::WriteCallback(void *contents, size_t size, size_t nmemb, std::string *output)
{
    size_t totalSize = size * nmemb;
    output->append(static_cast<char *>(contents), totalSize);
    return totalSize;
}

string httpRequest::getModel(string make)
{

    string call = "https://api.api-ninjas.com/v1/cars?limit=50&model=" + make;
    const char *url = call.c_str();

    // Set the write callback function
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    // Set the URL to request
    curl_easy_setopt(curl, CURLOPT_URL, url);

    // Perform the HTTP GET request
    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK)
    {
        return curl_easy_strerror(res);
    }
    else
    {
        // Process response as needed (e.g., print or save to a file)
        return response;
    }
}
