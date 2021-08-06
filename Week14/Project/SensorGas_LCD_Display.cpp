//By Luis Méndez -- Robotics 2C -- UPY -- Structured Programming

/*Sensor Gas - LCD Display*/

#include <LiquidCrystal.h>
/* Digital pins LCD Display Syntax*/
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
/* piezo integer*/
int piezo = 10;

void setup() {
  Serial.begin(9600); // Transfer rate
  lcd.begin(16, 2); // Column and row parameters of the LCD display
  pinMode(13,OUTPUT); //D13 OUTPUT
  pinMode(7,OUTPUT); //D7 OUTPUT
  pinMode(6,OUTPUT); //D6 OUTPUT
  pinMode(A0, INPUT); // A0 INPUT (Analog IN)
  pinMode(piezo, OUTPUT); // Piezo OUTPUT (10)
}

void loop() {
  
  int gas_lvl; //Entero
  gas_lvl = analogRead(A0); // Read value from Analog pin (A0)
  lcd.setCursor(00,00); // LCD parameters
  lcd.print("Gas Level:"); // Print txt
  lcd.setCursor(11,00); // LCD parameters
  lcd.print(gas_lvl); // Print the level gas value
  
  /*Structure ------ IF - ELSE IF - ELSE*/
  
  /* For when the gas level is higher than 800 it emits a text alert on display of "Danger!" 
  and the tone of the piezo will have a higher frequency (hz) and higher intermittency in sound*/

  if(gas_lvl > 800){
  	digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW); // ON/OFF intermittence for Red LED
    lcd.setCursor(00,1);
    lcd.print("Danger!");
    tone(piezo, 550, 100);
    delay(100);

    /* The same case as the previous one only in this part the yellow LED will flash and the piezo tone
    it will be more serious and less frequently*/

  }else if(gas_lvl > 700){
    digitalWrite(6,HIGH);
    digitalWrite(6,LOW);
    lcd.setCursor(00,1);
    lcd.print("Warning!");
    tone(piezo, 500, 200);
    delay(300);

    /*And in the last case there is no piezo sound and the green LED 
    stays on for stability in the gas level.*/

  }else {
    digitalWrite(7,HIGH);
    lcd.setCursor(00,1);
    lcd.print("Stable :)");
    delay(500);
  }

  /* Maintains a constant printout of customer information gas level received by the sensor 
  with an update delay than 100 ms*/

  Serial.println(gas_lvl);
  delay(100);
  lcd.clear();
 
}

//By Luis Méndez -- Robotics 2C -- UPY -- Structured Programming