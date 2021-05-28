

void setup(){
   Serial.begin(9600); // initialize serial communications at 9600 bps:
   
   pinMode(12, INPUT_PULLUP);
   pinMode(3, OUTPUT);
}

void loop(){
   // If circuit closed,...do something
   if(digitalRead(12) == LOW){
      Serial.println("circuit closed");
      digitalWrite(3,HIGH); //e.g., turn on LED
   }else{
      digitalWrite(3,LOW);
   }
}
