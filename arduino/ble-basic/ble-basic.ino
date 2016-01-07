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
}

void loop() {
  
}

void RFduinoBLE_onConnect(){

}

void RFduinoBLE_onDisconnect(){

}
