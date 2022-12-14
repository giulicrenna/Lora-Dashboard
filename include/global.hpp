#include <iostream>
#include <vector>

const char *ssid = "Darkflow-Lora";
const char *password = NULL;

int lastTimeRead = 0;

typedef enum
{
    NONE,
    START_STA,
    START_INTERPRETATOR_LOCAL_SERVER,
    START_INTERPRETATOR
} States;

States currentState = START_STA;

std::vector<std::string> messages;
std::vector<std::string> topics;

IPAddress local_ip(192, 168, 0, 1);
IPAddress gateway(192, 168, 0, 1);
IPAddress subnet(255, 255, 255, 0);

struct
{
    String WiFiScan[9];
    String l1 = "default";
    String l2 = "default";
    String l3 = "default";
    String nodes = "default";
} input;

struct
{
    String ssid;
    String password;
    String gprs = "off";
    String wifi = "off";
} config;

struct
{
    String mqttBroker;
    String clientID;
    String subsTopic;
    String pubTopic;
} mqttCredentials;