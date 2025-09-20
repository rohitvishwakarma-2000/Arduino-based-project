
#define BLYNK_TEMPLATE_ID "TMPL3Cx9GzG4a"
#define BLYNK_TEMPLATE_NAME "Project1 Home Autmation"
#define BLYNK_AUTH_TOKEN "n64jlbxp5BJLiNP-XpAmsZMD8EpshjjJ"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "moto g45 5G_1492";
char pass[] = "123451234";

BLYNK_WRITE(sw0)
{
     int value = param.asInt();
     Serial.println(value);
      if(value == 1)
  {
       digitalWrite(D6, LOW);
        Serial.println("LED ON");
  }
     if(value == 0)
   {
       digitalWrite(D6, HIGH);
        Serial.println("LED OFF");
  }
}

BLYNK_WRITE(sw1)
{
     int value = param.asInt();
     Serial.println(value);
      if(value == 1)
  {
       digitalWrite(D7, LOW);
        Serial.println("LED ON");
  }
     if(value == 0)
   {
       digitalWrite(D7, HIGH);
        Serial.println("LED OFF");
  }
}

BLYNK_WRITE(sw2)
{
     int value = param.asInt();
     Serial.println(value);
      if(value == 1)
  {
       digitalWrite(D8, LOW);
        Serial.println("LED ON");
  }
     if(value == 0)
   {
       digitalWrite(D8, HIGH);
        Serial.println("LED OFF");
  }
}

BLYNK_WRITE(sw3)
{
     int value = param.asInt();
     Serial.println(value);
      if(value == 1)
  {
       digitalWrite(D9, LOW);
        Serial.println("LED ON");
  }
     if(value == 0)
   {
       digitalWrite(D9, HIGH);
        Serial.println("LED OFF");
  }
}

void setup() {
Serial.begin(11520);
Blynk.begin(auth,  ssid,  pass);
pinMode(D6 , OUTPUT);
pinMode(D7 , OUTPUT);
pinMode(D8 , OUTPUT);
pinMode(D9 , OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}
