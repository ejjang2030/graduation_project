#include <iostream>
#include <string>
#define CURL_STATICLIB
#include <curl/curl.h>
#define TokenKey "o.pYIiEMmGG8arl5bBFnHfnMIxJMztjGlF"

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

int main(void)
{
	CURL *curl;
	CURLcode res;
	std::string readBuffer;
	
	curl = curl_easy_init();
	if(curl) {
		
		curl_slist *http_headers = NULL;
		
		http_headers = curl_slist_append(http_headers, "Content-Type: application/json");
		
		curl_easy_setopt(curl, CURLOPT_URL, "https://api.pushbullet.com/v2/users/me");
		curl_easy_setopt(curl, CURLOPT_POST, true);
		curl_easy_setopt(curl, CURLOPT_USERPWD, TokenKey);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "Alarm");
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, http_headers);
		//curl_easy_setopt(curl, CURLOPT_RTSP_TRANSPORT, true);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);		
		
		res = curl_easy_perform(curl);
		/*if(res != CURL_OK) {
			MessageBox(0, curl_easy_strerror(res), "curl_easy_perform() failed!", 0);
			return (-2);
		}*/
		curl_easy_cleanup(curl);
		curl_slist_free_all(http_headers);
		//std::cout << readBuffer << std::endl;
	}
	return 0;
}

