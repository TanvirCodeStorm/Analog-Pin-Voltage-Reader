#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);

// C++ code
// DEVELOPED BY TANVIR HUSSAIN
// GitHub- https://github.com/TanvirCodeStorm
void setup()
{
lcd.begin(16, 2);
  lcd.setCursor(2, 0);
  lcd.print("DEVELOPED BY");
  lcd.setCursor(1, 1);
  lcd.print("TANVIR HUSSAIN");
  delay(5000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("POT VOLTAGE");
}

void loop()
{
  int val = analogRead(A3);
  float volt = val / 204.6;
lcd.setCursor(0, 1);
  lcd.print("                 ");
  lcd.setCursor(6, 1);
  lcd.print(volt);
  delay(100);
}
