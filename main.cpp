#include <stdio.h>
#include <curl/curl.h>
#include <iostream>

int main(void)
{
    CURL* curl;
    CURLcode res;

    curl = curl_easy_init();

    if (curl) {
     
        curl_easy_setopt(curl, CURLOPT_URL, "http://127.0.0.1:9999/");

        res = curl_easy_perform(curl);

        std::cout << std::endl;

        curl_easy_cleanup(curl);
    }

    return 0;
}