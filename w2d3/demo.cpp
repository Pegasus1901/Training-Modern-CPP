#include<curl/curl.h>
#include<iostream>

size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*) ptr, size * nmemb);
    return size * nmemb;
}

int main(int argc, char const *argv[])
{

    std::string end_points= "";



    auto curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.github.com/repos/whoshuu/cpr/contributors?anon=true&key=value");
        
        std::string response_string{""};
        /*
            API calls also send parameters
            (Not applicable in this example because we are not modifying anything)
        */
        std::string header_string{""};
        /*
            we need a fn. that can read response recieve and write it
            (byte-by-byte) into response_string variable.
            this fn(writeFunction is defined above)
        */
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);
        /*
            specify where data has to be written
        */
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
        /*
            specify where data comes from (location of header_string)
        */
        curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header_string);
        
        /*
            store response code after execution of api call in this variable
        */
        long response_code{0};

        
        double elapsed{0};


        /*
            after a settings above, finally execute curl with all oprtions provided
        */
        curl_easy_perform(curl);

        /*
            gather info on response code ,store it in response_code variable location
            similarly we store thime elapsed time in its respective variable location
        */
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);

        
        curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME, &elapsed);
        
        // std::cout<<response_string;

        /*
            cleanup session, Reset everything before next request is to be made
        */
        curl_easy_cleanup(curl);
        /*
            session can be terminated by setting curl session object to NULL
        */
        curl = NULL;
        std::cout<<response_string;
        std::cout<<response_code;

    }
    return 0;
}
