#include "httprequest.h"
#include <string>
#include <cstring>

#include <QPixmap>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QByteArray>
#include <QUrl>

httpRequest::httpRequest()
{
    curl = curl_easy_init();
    if (!curl)
    {
        cerr << "Failed to initialize cURL" << std::endl;

    }
}

httpRequest::~httpRequest(){

    curl_easy_cleanup(curl);
}

size_t httpRequest::WriteCallback(void *contents, size_t size, size_t nmemb, std::string *output)
{
    size_t totalSize = size * nmemb;
    output->append(static_cast<char *>(contents), totalSize);
    return totalSize;
}

string httpRequest::getImageURL(string modelMake)
{

    string call = "https://images.vinaudit.com/v3/images?id=2018_" + modelMake + "&format=json&key=VA_DEMO_KEY";
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

void httpRequest::setImageURL(QString url, QLabel *label){

    QNetworkAccessManager *manager = new QNetworkAccessManager();

    // Specify the URL of the image you want to retrieve
    QUrl imageUrl(url);

    // Make the HTTP GET request to retrieve the image
    QNetworkReply *reply = manager->get(QNetworkRequest(imageUrl));

    // Connect a slot to handle the reply when it's finished
    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            // Read the image data from the reply
            QByteArray imageData = reply->readAll();

            // Create a QPixmap from the image data
            QPixmap pixmap;
            pixmap.loadFromData(imageData);

            // Scale the pixmap to fit the QLabel's size (optional)
            pixmap = pixmap.scaled(label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

            // Set the pixmap as the QLabel's pixmap
            label->setPixmap(pixmap);

            // Show the QLabel
            label->show();

        } else {
            // Handle the error if the request fails
            qDebug() << "Error loading image:" << reply->errorString();
        }

        // Clean up
        reply->deleteLater();
    });
}
