# geocoder

C++ command line tool that uses Google Maps API to retrieve data based on a given portion of address string.


---
# Installation

### Install CMake
> See https://cmake.org/download/

### Get the application source code
> git clone https://github.com/samuelportela/geocoder.git

### Create "build" directory and compile the application
```
cd geocoder
mkdir -p build
cd build
cmake ..
```

### Create package for distribution
> cpack

### Install the geocoder application on your operating system
> make install


---
# Usage

### Example of address being searched
If you have installed geocoder, you can run it this way (from any directory):
> geocoder "255 Greenwich St"

But if you haven't installed geocoder, you can run it this way (run this command inside "build" directory):
> ./geocoder "255 Greenwich St"

Example of result:
```
Usign Google Maps API to search data based on the following address: 255 Greenwich St
{
   "results" : [
      {
         "address_components" : [
            {
               "long_name" : "255",
               "short_name" : "255",
               "types" : [ "street_number" ]
            },
            {
               "long_name" : "Greenwich Street",
               "short_name" : "Greenwich St",
               "types" : [ "route" ]
            },
            {
               "long_name" : "Lower Manhattan",
               "short_name" : "Lower Manhattan",
               "types" : [ "neighborhood", "political" ]
            },
            {
               "long_name" : "Manhattan",
               "short_name" : "Manhattan",
               "types" : [ "political", "sublocality", "sublocality_level_1" ]
            },
            {
               "long_name" : "New York",
               "short_name" : "New York",
               "types" : [ "locality", "political" ]
            },
            {
               "long_name" : "New York County",
               "short_name" : "New York County",
               "types" : [ "administrative_area_level_2", "political" ]
            },
            {
               "long_name" : "New York",
               "short_name" : "NY",
               "types" : [ "administrative_area_level_1", "political" ]
            },
            {
               "long_name" : "United States",
               "short_name" : "US",
               "types" : [ "country", "political" ]
            },
            {
               "long_name" : "10007",
               "short_name" : "10007",
               "types" : [ "postal_code" ]
            },
            {
               "long_name" : "2164",
               "short_name" : "2164",
               "types" : [ "postal_code_suffix" ]
            }
         ],
         "formatted_address" : "255 Greenwich St, New York, NY 10007, USA",
         "geometry" : {
            "location" : {
               "lat" : 40.7143303,
               "lng" : -74.0111548
            },
            "location_type" : "ROOFTOP",
            "viewport" : {
               "northeast" : {
                  "lat" : 40.7156792802915,
                  "lng" : -74.0098058197085
               },
               "southwest" : {
                  "lat" : 40.7129813197085,
                  "lng" : -74.01250378029151
               }
            }
         },
         "place_id" : "ChIJ10_aSxlawokRRrWGDK1SitQ",
         "types" : [ "street_address" ]
      },
      {
         "address_components" : [
            {
               "long_name" : "255",
               "short_name" : "255",
               "types" : [ "street_number" ]
            },
            {
               "long_name" : "Greenwich Street",
               "short_name" : "Greenwich St",
               "types" : [ "route" ]
            },
            {
               "long_name" : "Davenport",
               "short_name" : "Davenport",
               "types" : [ "locality", "political" ]
            },
            {
               "long_name" : "Polk County",
               "short_name" : "Polk County",
               "types" : [ "administrative_area_level_2", "political" ]
            },
            {
               "long_name" : "Florida",
               "short_name" : "FL",
               "types" : [ "administrative_area_level_1", "political" ]
            },
            {
               "long_name" : "United States",
               "short_name" : "US",
               "types" : [ "country", "political" ]
            },
            {
               "long_name" : "33896",
               "short_name" : "33896",
               "types" : [ "postal_code" ]
            },
            {
               "long_name" : "8890",
               "short_name" : "8890",
               "types" : [ "postal_code_suffix" ]
            }
         ],
         "formatted_address" : "255 Greenwich St, Davenport, FL 33896, USA",
         "geometry" : {
            "location" : {
               "lat" : 28.252889,
               "lng" : -81.612409
            },
            "location_type" : "ROOFTOP",
            "viewport" : {
               "northeast" : {
                  "lat" : 28.2542379802915,
                  "lng" : -81.61106001970849
               },
               "southwest" : {
                  "lat" : 28.2515400197085,
                  "lng" : -81.6137579802915
               }
            }
         },
         "place_id" : "ChIJRTPgjyJ63YgRLob4B-lSh9s",
         "types" : [ "street_address" ]
      }
   ],
   "status" : "OK"
}
```
