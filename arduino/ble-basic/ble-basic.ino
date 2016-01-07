#include <RFduinoBLE.h>

int ledRed = 2;
int ledGreen = 3;
int ledBlue = 4;


void setup() {
  // Setup GPIOs (LEDs)
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);

  // Setup BLE	
  RFduinoBLE.advertisementData = "foobar";
  RFduinoBLE.deviceName = "RFDuino";
  RFduinoBLE.begin();

  // Start in disconnected state
  digitalWrite(ledRed, HIGH);
}

void loop() {
  
}

void RFduinoBLE_onConnect(){
  // Turn light green when BLE connects
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
}

void RFduinoBLE_onDisconnect(){
  // Turn light red when BLE disconnects
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, HIGH);
}
