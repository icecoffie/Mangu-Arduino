#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  lcd.clear();
  typeText(0, 0, "Jangan salahkan");
  delay(500);

  lcd.clear();
  typeText(0, 0, "fahamku kini");
  delay(500);

  lcd.clear();
  typeText(0, 0, "tertuju.. oh..");
  delay(500);

  lcd.clear();
  typeText(0, 0, "siapa yg tau?");
  typeText(0, 1, "siapa yg mau?");
  delay(1000);

  lcd.clear();
  typeText(0, 0, "kau disana");
  typeText(0, 1, "aku diseberangmu");
  delay(1000);

  lcd.clear();
  typeText(0, 0, "cerita kita");
  typeText(0, 1, "sulit dicerna");
  delay(500);

  lcd.clear();
  typeText(0, 0, "tak lagi sama");
  typeText(0, 1, "cara berdoa");
  delay(500);
}

void typeText(int col, int row, String text) {
  lcd.setCursor(col, row);
  for (int i = 0; i < text.length(); i++) {
    lcd.print(text[i]);
    delay(200); 
  }
}