// This file is autogenerated by VESC Tool

#ifndef CONF_DEFAULT_H_
#define CONF_DEFAULT_H_

// CAN ID
#ifndef CONF_CONTROLLER_ID
#define CONF_CONTROLLER_ID 2
#endif

// CAN Baud Rate
#ifndef CONF_CAN_BAUD_RATE
#define CONF_CAN_BAUD_RATE 2
#endif

// Status Message Rate
#ifndef CONF_CAN_STATUS_RATE_HZ
#define CONF_CAN_STATUS_RATE_HZ 20
#endif

// WiFi Mode
#ifndef CONF_WIFI_MODE
#define CONF_WIFI_MODE 0
#endif

// Station Mode SSID
#ifndef CONF_WIFI_STA_SSID
#define CONF_WIFI_STA_SSID ""
#endif

// Station Mode Key
#ifndef CONF_WIFI_STA_KEY
#define CONF_WIFI_STA_KEY ""
#endif

// Access Point SSID
#ifndef CONF_WIFI_AP_SSID
#define CONF_WIFI_AP_SSID "VESC WiFi"
#endif

// Access Point Key
#ifndef CONF_WIFI_AP_KEY
#define CONF_WIFI_AP_KEY "vesc6wifi"
#endif

// Enable Local TCP
#ifndef CONF_USE_TCP_LOCAL
#define CONF_USE_TCP_LOCAL 1
#endif

// Enable TCP Hub
#ifndef CONF_USE_TCP_HUB
#define CONF_USE_TCP_HUB 0
#endif

// TCP Hub URL
#ifndef CONF_TCP_HUB_URL
#define CONF_TCP_HUB_URL "veschub.vedder.se"
#endif

// TCP Hub Port
#ifndef CONF_TCP_HUB_PORT
#define CONF_TCP_HUB_PORT 65101
#endif

// TCP Hub ID
#ifndef CONF_TCP_HUB_ID
#define CONF_TCP_HUB_ID "express1"
#endif

// TCP Hub Password
#ifndef CONF_TCP_HUB_PASS
#define CONF_TCP_HUB_PASS ""
#endif

// Bluetooth Mode
#ifndef CONF_BLE_MODE
#define CONF_BLE_MODE 1
#endif

// Name
#ifndef CONF_BLE_NAME
#define CONF_BLE_NAME "ExpressT"
#endif

// Bluetooth Pin Code
#ifndef CONF_BLE_PIN
#define CONF_BLE_PIN 123456
#endif

// BLE Service Capacity
#ifndef CONF_BLE_SERVICE_CAPACITY
#define CONF_BLE_SERVICE_CAPACITY 0
#endif

// BLE Characteristic and Descriptor Capacity
#ifndef CONF_BLE_CHR_DESCR_CAPACITY
#define CONF_BLE_CHR_DESCR_CAPACITY 0
#endif

// CONF_DEFAULT_H_
#endif

