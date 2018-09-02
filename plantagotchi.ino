    /////////////////////////////////////////////////////////////////
   //             Arduino Nokia 5110 Graphics           v1.00     //
  //       Get the latest version of the code here:              //
 //      http://educ8s.tv/nokia-5110-bitmap-graphics            //
/////////////////////////////////////////////////////////////////


#include <LCD5110_Graph.h>

LCD5110 lcd(8,9,10,12,11);

// Emotions Graphic
extern uint8_t bad[];
extern uint8_t crying[];
extern uint8_t dead[];
extern uint8_t disappointed[];
extern uint8_t grumpy[];
extern uint8_t happy[];
extern uint8_t sad[];

int soilMoisture;
int sensorPin = A0;

void setup()
{
  lcd.InitLCD();
}

void readSoilMoisture()
{
  int sensorValue = analogRead(sensorPin); // read the raw value
  soilMoisture = map(sensorValue,550,0,0,100); // map the received value
}

void feelingHappy()
{
  lcd.drawBitmap(0,0,happy,84,48);
}

void feelingGrumpy()
{
  lcd.drawBitmap(0,0,grumpy,84,48);
}

void feelingBad()
{
  lcd.drawBitmap(0,0,bad,84,48);
}

void feelingDisappointed()
{
  lcd.drawBitmap(0,0,disappointed,84,48);
}

void feelingSad()
{
  lcd.drawBitmap(0,0,crying,84,48);
}

void iAmDead()
{
  lcd.drawBitmap(0,0,dead,84,48);
}

void getMood()
{
  lcd.clrScr();
  if (soilMoisture >= 0 && soilMoisture < 250)
  {
    feelingGrumpy();
  } else if (soilMoisture >= 250 && soilMoisture < 350)
  {
    feelingBad();
  } else if (soilMoisture >= 350 && soilMoisture < 500)
  {
    feelingHappy();
   } else if (soilMoisture >= 500 && soilMoisture < 800)
  {
    feelingSad();
   } else
  {
    iAmDead();
  }
  lcd.update();
}
  
void loop()
{
  readSoilMoisture();
  getMood();
  delay(20000);

  
}


