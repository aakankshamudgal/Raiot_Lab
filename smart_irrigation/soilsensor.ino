int sensor_pin = A0;

int ACWATERPUMP = 13;

int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);

   output_value = map(output_value,550,0,0,100);

   if( output_value < 50)
   {
      analogWrite(13,HIGH);
      Serial.print("Extremely Dry Soil ");
   }
   if( output_value > 51 && output_value < 75)
   {
      analogWrite(13,HIGH);
      Serial.print("Enough Water provided ");
   }

   if( output_value > 76)
   {
      analogWrite(13,LOW);
      Serial.print("Stop water now!!!! ");
   }

    Serial.print("Mositure : ");

   Serial.print(output_value);

   Serial.println("%");

   delay(1000);
   }

  

 
