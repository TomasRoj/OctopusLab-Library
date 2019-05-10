// Simple example of using ESP32 to show
//how easy is to work with WiFi on this board.
//This example shows how to print some message to server.
// All basic examples of the chip itself are available
//on https://github.com/espressif/arduino-esp32.

#include <WiFi.h>
#include <WiFiMulti.h>

WiFiMulti WiFiMulti;

void setup()
{
    Serial.begin(115200);
    delay(10);

    // We start by connecting to a WiFi network
    // Please write your ssid (name of your network) and password to it here.
    WiFiMulti.addAP("SSID", "passpasspass");

    Serial.println();
    Serial.println();
    Serial.print("Waiting for WiFi... ");

    while(WiFiMulti.run() != WL_CONNECTED) {
        Serial.print(".");
        delay(500);
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());

    delay(500);
}


void loop()
{
    const uint16_t port = 80;
    const char * host = "192.168.1.1"; // IP or DNS

    Serial.print("Connecting to ");
    Serial.println(host);

    // Use WiFiClient class to create TCP connections
    WiFiClient client;

    if (!client.connect(host, port)) {
        Serial.println("Connection failed.");
        Serial.println("Waiting 5 seconds before retrying...");
        delay(5000);
        return;
    }

    // This will send a request to the server
    client.print("Send this data to the server");

    //read back one line from the server
    String line = client.readStringUntil('\r');
    client.println(line);

    Serial.println("Closing connection.");
    client.stop();

    Serial.println("Waiting 5 seconds before restarting...");
    delay(5000);
}