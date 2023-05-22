int LED=13;
int GAS=A0;
int moistureValue;
float moisture_percentage;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    float sensorValue;
    sensorValue=analogRead(GAS);
    moistureValue=analogRead(A1);
    moisture_percentage=((moistureValue/539.00)*100);
    Serial.print("\nMoisture Value:");
    Serial.print(moisture_percentage);
    Serial.print("%");
    Serial.print("\n");
    if(sensorValue>=200)
    {
        digitalWrite(LED,HIGH);
       Serial.println("GAS DETECTED");
        Serial.print(sensorValue);
       
    }
    else{
        digitalWrite(LED,LOW);
      Serial.println("concentration of gas is");
        Serial.print(sensorValue);
        Serial.println(sensorValue);
      	
 	    }
    delay(1000);
}