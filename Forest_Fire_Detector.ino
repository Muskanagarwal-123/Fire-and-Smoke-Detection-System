#include "LiquidCrystal.h"
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int smoke = A0;
int fire = A1;
int buzz = 13;
int ind = 8;
int alr = 9;
int val1 = 0;
int val2 = 0;

void setup() {  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Fire and Smoke  ");
  lcd.setCursor(0, 1);
  lcd.print("Detector         ");
  delay(3000);
  pinMode(smoke,INPUT);
  pinMode(fire,INPUT);
  pinMode(buzz,OUTPUT);
  pinMode(ind,OUTPUT);
  pinMode(alr,OUTPUT);
}

void loop() {
  val1 = digitalRead(smoke);
  val2 = digitalRead(fire);
if(val1 == LOW)
{
  digitalWrite(ind,HIGH);
    lcd.setCursor(0, 0);
  lcd.print("Smoke Detected     ");
  lcd.setCursor(0, 1);
  lcd.print("Check Alert        ");
  delay(1000);
  
  }
   if (val2 == LOW)
  {
    digitalWrite(alr,HIGH);
    digitalWrite(buzz,HIGH);
      lcd.setCursor(0, 0);
  lcd.print("Fire Detected        ");
  lcd.setCursor(0, 1);
  lcd.print("Please FIX           ");
  delay(1000);
    
    }
    else 
    {
  lcd.setCursor(0, 0);
  lcd.print("No Smoke         ");
  lcd.setCursor(0, 1);
  lcd.print("No Fire           ");
  delay(1000);
  digitalWrite(ind,LOW);
  digitalWrite(alr,LOW);
  digitalWrite(buzz,LOW);
      }
}
