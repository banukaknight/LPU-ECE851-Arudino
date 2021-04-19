#include <LiquidCrystal.h> // include the library code
   
const int numRows = 2;    //constants for the number of rows and columns in the LCD
const int numCols = 16;
   
LiquidCrystal lcd(D0, D1, D2, D3, D4, D5); // D0:E, D1:RS, DATA LINES OF (4)CONNECTED WITH D2 TO D5 PINS OF NODEMCU 
void setup()
{
lcd.begin(16,2);
lcd.print(" **THE DOST**"); 
}
void loop()
{
lcd.setCursor(0, 1);      
lcd.print("   Study Well  ");
delay(5000);
}
