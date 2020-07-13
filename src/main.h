#include <Arduino.h>

#define SIM800L_IP5306_VERSION_20190610
// #define SIM800L_AXP192_VERSION_20200327
// #define SIM800C_AXP192_VERSION_20200609



// Set serial for debug console (to the Serial Monitor, default speed 115200)
#define SerialMon Serial
// Set serial for AT commands (to the module)
#define SerialAT  Serial1

#define TINY_GSM_MODEM_SIM800
#define TINY_GSM_RX_BUFFER      1024   // Set RX buffer to 1Kb

#define uS_TO_S_FACTOR 1000000ULL  /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  60        /* Time ESP32 will go to sleep (in seconds) */
#define TINY_GSM_USE_GPRS true
#define MAXPsi 30

// MQTT details
const char* broker = "broker.hivemq.com";

const char* topicLed = "GsmClientTest/led";
const char* topicInit = "GsmClientTest/init";
const char* topicLedStatus = "GsmClientTest/ledStatus";

const char apn[]      = ""; // Your APN
const char gprsUser[] = ""; // User
const char gprsPass[] = ""; // Password
const char simPIN[]   = ""; // SIM card PIN code, if any

const int PressurePin = 34;

void setup();
void loop();
void setupModem();
void turnOffNetlight();
void turnOnNetlight();
void ConnectToNetwork();
bool mqttConnect();
void mqttCallback(char* topic, byte* payload, unsigned int len);
void readPressure();