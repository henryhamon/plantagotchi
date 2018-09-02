    /////////////////////////////////////////////////////////////////
   //             Arduino Nokia 5110 Graphics           v1.00     //
  //       Get the latest version of the code here:              //
 //      http://educ8s.tv/nokia-5110-bitmap-graphics            //
/////////////////////////////////////////////////////////////////


#include <LCD5110_Graph.h>

LCD5110 lcd(8,9,10,12,11);

extern uint8_t bad[];
extern uint8_t crying[];
extern uint8_t dead[];
extern uint8_t disappointed[];
extern uint8_t grumpy[];
extern uint8_t happy[];
extern uint8_t sad[];
extern uint8_t wound[];

void setup()
{
  lcd.InitLCD();
}

void loop()
{
  lcd.clrScr();
  lcd.drawBitmap(0,0,bad,84,48);
  lcd.update();
  delay(8000);

  lcd.clrScr();
  lcd.drawBitmap(0,0,crying,84,48);
  lcd.update();
  delay(8000);

  lcd.clrScr();
  lcd.drawBitmap(0,0,dead,84,48);
  lcd.update();
  delay(8000);

  lcd.clrScr();
  lcd.drawBitmap(0,0,disappointed,84,48);
  lcd.update();
  delay(8000);
  
  lcd.clrScr();
  lcd.drawBitmap(0,0,grumpy,84,48);
  lcd.update();
  delay(8000);

  lcd.clrScr();
  lcd.drawBitmap(0,0,happy,84,48);
  lcd.update();
  delay(8000);

  lcd.clrScr();
  lcd.drawBitmap(0,0,sad,84,48);
  lcd.update();
  delay(8000);

  lcd.clrScr();
  lcd.drawBitmap(0,0,wound,84,48);
  lcd.update();
  delay(8000);
  
}


