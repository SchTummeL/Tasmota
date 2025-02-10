#ifndef MY_USER_CREDENTIALS
    #define MY_USER_CREDENTIALS
    
    #ifndef STA_SSID1
    #define STA_SSID1              ""                // [Ssid1] Wi-Fi SSID
    #endif
    #ifndef STA_PASS1
    #define STA_PASS1              ""                // [Password1] Wi-Fi password
    #endif
    #ifndef STA_SSID2
    #define STA_SSID2              ""                // [Ssid2] Optional alternate AP Wi-Fi SSID
    #endif
    #ifndef STA_PASS2
    #define STA_PASS2              ""                // [Password2] Optional alternate AP Wi-Fi password
    #endif

    #ifndef MQTT_HOST 
    #define MQTT_HOST  
    #endif
    #ifndef MQTT_PORT 
    #define MQTT_PORT  
    #endif


    // -- Time - Up to 
    #ifndef NTP_SERVER1
    #define NTP_SERVER1
    #endif
    #ifndef NTP_SERVER2
    #define NTP_SERVER2
    #endif
    #ifndef NTP_SERVER3
    #define NTP_SERVER3
    #endif
    // -- Location ------------------------------------
    #ifndef LATITUDE
    #define LATITUDE               48.858360         // [Latitude] Your location to be used with sunrise and sunset
    #endif
    #ifndef LONGITUDE
    #define LONGITUDE              2.294442          // [Longitude] Your location to be used with sunrise and sunset
    #endif

#endif // MY_USER_CREDENTIALS