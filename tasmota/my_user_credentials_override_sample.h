#ifndef MY_USER_CREDENTIALS
    #define MY_USER_CREDENTIALS

    #undef STA_SSID1
    #define STA_SSID1         ""             // [Ssid1] Wifi SSID
    #undef STA_PASS1
    #define STA_PASS1         ""     // [Password1] Wifi password
    #undef MQTT_HOST
    #define MQTT_HOST         "" // [MqttHost]
    #undef MQTT_PORT
    #define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

    #undef WIFI_AP_PASSPHRASE
    #define WIFI_AP_PASSPHRASE     ""                // AccessPoint passphrase. For WPA2 min 8 char, for open use "" (max 63 char).


    // -- Time - Up to three NTP servers in your region
    #undef NTP_SERVER1
    #define NTP_SERVER1      ""         // [NtpServer1] Select first NTP server by name or IP address (135.125.104.101, 2001:418:3ff::53)
    #undef NTP_SERVER2
    #define NTP_SERVER2      ""                      // [NtpServer2] Select second NTP server by name or IP address (192.36.143.134, 2a00:2381:19c6::100)
    #undef NTP_SERVER3
    #define NTP_SERVER3      ""                      // [NtpServer3] Select third NTP server by name or IP address (46.249.42.13, 2603:c022:c003:c900::4)
                                                    // To manually set:
                                                    //   BackLog NtpServer1 2.pool.ntp.org; NtpServer2 2.europe.pool.ntp.org; NtpServer3 2.nl.pool.ntp.org
    #undef LATITUDE 
    #define LATITUDE               48.000000         // [Latitude] Your location to be used with sunrise and sunset
    #undef LONGITUDE
    #define LONGITUDE              9.000000          // [Longitude] Your location to be used with sunrise and sunset

#endif // MY_USER_CREDENTIALS