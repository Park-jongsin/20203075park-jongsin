#define PIN_LED 7
int i = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{   while(i>=0)
    {
      if(i==0)
      {
        digitalWrite(PIN_LED, 0);
        delay(1000);
      }
      if (i < 6)
      {
        digitalWrite(PIN_LED, 1);
        delay(100); 
        digitalWrite(PIN_LED, 0);
        delay(100);
        i += 1;
      }
      if (i==6)
      {
        digitalWrite(PIN_LED, 1);
      }
    }
}










/*
void setup(){
  pinMode(PIN_LED, OUTPUT);
}

void loop(){
  digitalWrite(PIN_LED, 1);
  //digitalWrite(PIN_LED, 0);
}
*/

 
