int temp=A0;
float light;
int light_value;
void setup()
{
    Serial.begin(112500);
    pinMode(temp,INPUT);
    pinMode(13,OUTPUT);
  pinMode(7,INPUT);
    }
    void loop()
    {
        int light_value=analogRead(temp);
        light=light_value*0.0976;
        Serial.println(light);
        delay(100);
        if(light_value >1000)
        {
            digitalWrite(13,HIGH);
            }
            else{
                digitalWrite(13,LOW);
            }
      int p=digitalRead(7);
        Serial.println(p);
    }