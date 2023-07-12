#define BLYNK_TEMPLATE_ID           "TMPLAe498oi1"
#define BLYNK_DEVICE_NAME           "SAI"
#define BLYNK_AUTH_TOKEN            "w3_eLtcnq3bL4KAGoSybTp7N1qbXixcI"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<Servo.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "SAI";
char pass[] = "12341234";

Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
  BLYNK_WRITE(V0){
  servo0.write(param.asInt());
  }
  BLYNK_WRITE(V1){
  servo1.write(param.asInt());
  }
  BLYNK_WRITE(V2){
  servo2.write(param.asInt());
  }
  BLYNK_WRITE(V3){
  servo3.write(param.asInt());
  }
  BLYNK_WRITE(V4){
  servo4.write(param.asInt());
  }
  BLYNK_WRITE(V5){
  servo5.write(param.asInt());
  }
void setup() {
  Blynk.begin(auth,ssid,pass);
  servo0.attach(16,500,2400);
   Blynk.begin(auth,ssid,pass);
  servo1.attach(5);
   Blynk.begin(auth,ssid,pass);
  servo2.attach(4,500,2400);
   Blynk.begin(auth,ssid,pass);
  servo3.attach(0,500,2400);
   Blynk.begin(auth,ssid,pass);
  servo4.attach(2,500,2400);
   Blynk.begin(auth,ssid,pass);
  servo5.attach(14,500,2400);
}

void loop() {
 Blynk.run();
}
