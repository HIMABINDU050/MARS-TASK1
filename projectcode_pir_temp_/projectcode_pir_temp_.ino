int sensorPin=0;
int pirsensor=0;
void setup()
{
    Serial.begin(9600);
    pinMode(13,OUTPUT);
    pinMode(2,INPUT);
}
void loop()
{
    int reading=analogRead(sensorPin);
    float voltage=reading*4.68;
    voltage/=1024.0;
    //now print out the temperature
    float temperatureC=(voltage-0.5)*100;
    Serial.print(temperatureC);
    Serial.println("degrees C");
   pirsensor=digitalRead(2);
    if(pirsensor==HIGH)
    {
        digitalWrite(13,HIGH);
    }
    else
    {
        digitalWrite(13,LOW);
    }
    delay(10);
}