#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <curl/curl.h>

using namespace std;

int main(int argc, char* argv[])
{
  if (argc < 2) {
    cerr << "Usage: " << argv[0] << " \"ADDRESS STRING\"" << endl;
    return 1;
  }

  cout << "Usign Google Maps API to search data based on the following address: " << argv[1] << endl;

  CURL *curl;
  CURLcode res;
 
  curl = curl_easy_init();
  if (curl) {
    string address = argv[1];
    replace(address.begin(), address.end(), ' ', '+');
    string url = "http://maps.googleapis.com/maps/api/geocode/json?address=" + address;
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    res = curl_easy_perform(curl);

    if (res != CURLE_OK) {
      fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    }
 
    curl_easy_cleanup(curl);
  }
  return 0;
}
