#include <ESP8266WiFi.h>
#define LEDRED D1
#define LEDYELLOW D2
#define LEDGREEN D5



void setup() {
  // put your setup code here, to run once:
  pinMode(LEDRED, OUTPUT);
  digitalWrite(LEDRED, LOW);

  pinMode(LEDYELLOW, OUTPUT);
  digitalWrite(LEDYELLOW, LOW);

  pinMode(LEDGREEN, OUTPUT);
  digitalWrite(LEDGREEN, LOW);

  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDRED, HIGH);
  Serial.println("led red on");
  delay(5000);
  digitalWrite(LEDRED, LOW);
  Serial.println("led red off");
  delay(100);
  
  digitalWrite(LEDYELLOW, HIGH);
  Serial.println("led yellow on");
  delay(2000);
  digitalWrite(LEDYELLOW, LOW);
  Serial.println("led yellow off");
  delay(100);
  
  digitalWrite(LEDGREEN, HIGH);
  Serial.println("led green on");
  delay(5000);
  digitalWrite(LEDGREEN, LOW);
  Serial.println("led green off");
  delay(100);

  digitalWrite(LEDYELLOW, HIGH);
  Serial.println("led yellow on");
  delay(2000);
  digitalWrite(LEDYELLOW, LOW);
  Serial.println("led yellow off");
  delay(100);
}
