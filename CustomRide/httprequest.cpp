#include "httprequest.h"
#include <string>

httpRequest::httpRequest()
{
    string api_key = "X-Api-Key: " + string(getenv("MY_API_KEY"));
    headers = curl_slist_append(headers, api_key.c_str());
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
