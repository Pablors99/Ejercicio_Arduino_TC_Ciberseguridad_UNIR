// C++ code
//Se declaran las variables y se añade la extensión de la pantalla lcd.
#include <Adafruit_LiquidCrystal.h>

int color1 = 0;

int color2 = 0;

int color3 = 0;

int color4 = 0;

int color5 = 0;

int color6 = 0;

int color7 = 0;

int color8 = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(5, INPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, INPUT);
  pinMode(3, OUTPUT);
  pinMode(7, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
}

//Para cada variable he puesto 3 if para controlar que botón se ha pulsado.

//En cada if controla si uno de los tres botones esta pulsado, el que esta pulsado verifica si la variable esta con valor 0 y si es asi,
//guarda el valor del led en la variable. El buzzer hace un sonido y enciende el led correspondiente, luego hace un delay de 1 segundo y apaga el led.
//Y realiza el mismo procedimiento para el resto de variables.
void loop()
{
  if (digitalRead(5) == HIGH && color1 == 0) {
    color1 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(6) == HIGH && color1 == 0) {
    color1 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(7) == HIGH && color1 == 0) {
    color1 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color1);
  if (digitalRead(5) == HIGH && color2 == 0) {
    color2 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(6) == HIGH && color2 == 0) {
    color2 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(7) == HIGH && color2 == 0) {
    color2 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color2);
  if (digitalRead(5) == HIGH && color3 == 0) {
    color3 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(6) == HIGH && color3 == 0) {
    color3 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(7) == HIGH && color3 == 0) {
    color3 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color3);
  if (digitalRead(5) == HIGH && color4 == 0) {
    color4 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(6) == HIGH && color4 == 0) {
    color4 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(7) == HIGH && color4 == 0) {
    color4 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color4);
  if (digitalRead(8) == HIGH && color5 == 0) {
    color5 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(9) == HIGH && color5 == 0) {
    color5 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(10) == HIGH && color5 == 0) {
    color5 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color5);
  if (digitalRead(8) == HIGH && color6 == 0) {
    color6 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(9) == HIGH && color6 == 0) {
    color6 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(10) == HIGH && color6 == 0) {
    color6 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color6);
  if (digitalRead(8) == HIGH && color7 == 0) {
    color7 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(9) == HIGH && color7 == 0) {
    color7 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(10) == HIGH && color7 == 0) {
    color7 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color7);
  if (digitalRead(8) == HIGH && color8 == 0) {
    color8 = 4;
    tone(11, 165, 200); // play tone 40 (E3 = 165 Hz)
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
  }
  if (digitalRead(9) == HIGH && color8 == 0) {
    color8 = 3;
    tone(11, 220, 200); // play tone 45 (A3 = 220 Hz)
    digitalWrite(3, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
  }
  if (digitalRead(10) == HIGH && color8 == 0) {
    color8 = 2;
    tone(11, 294, 200); // play tone 50 (D4 = 294 Hz)
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  }
  Serial.println(color8);
  delay(100); // Wait for 100 millisecond(s)

//Para hacer la comprobación primero verifica si todas las variables tienen un valor distinto de 0.
//Luego comprueba si las variables del jugador uno son las mismas que las del jugador dos,
//si es asi hace una serie de sonidos, enciende los leds y pone un mensaje en la pantalla lcd (Correcto!!) y pone las variables a 0,
//y si las variables no cuinciden hace un sonido diferente y pone un mensaje en la pantalla lcd (Mal!!) y pone las variables a 0.
  if (color1 != 0 && (color2 != 0 && (color3 != 0 && (color4 != 0 && (color5 != 0 && (color6 != 0 && (color7 != 0 && color8 != 0))))))) {
    if (color1 == color5 && (color2 == color6 && (color3 == color7 && color4 == color8))) {
      tone(11, 1661, 200); // play tone 80 (G#6 = 1661 Hz)
      digitalWrite(4, HIGH);
      delay(200); // Wait for 200 millisecond(s)
      tone(11, 2217, 200); // play tone 85 (C#7 = 2217 Hz)
      digitalWrite(3, HIGH);
      delay(200); // Wait for 200 millisecond(s)
      tone(11, 2960, 500); // play tone 90 (F#7 = 2960 Hz)
      digitalWrite(2, HIGH);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(2, LOW);
      delay(200); // Wait for 200 millisecond(s)
      digitalWrite(3, LOW);
      delay(200); // Wait for 200 millisecond(s)
      digitalWrite(4, LOW);
      Serial.println(color1);
      Serial.println(color2);
      Serial.println(color3);
      Serial.println(color4);
      Serial.println(color5);
      Serial.println(color6);
      Serial.println(color7);
      Serial.println(color8);
      Serial.println("BIEN!!");
      lcd_1.print("Correcto!!");
      color1 = 0;
      color2 = 0;
      color3 = 0;
      color4 = 0;
      color5 = 0;
      color6 = 0;
      color7 = 0;
      color8 = 0;
      lcd_1.setCursor(0, 0);
      lcd_1.print("                                      ");
      lcd_1.setCursor(0, 0);
    } else {
      tone(11, 92, 200); // play tone 30 (F#2 = 92 Hz)
      Serial.println(color1);
      Serial.println(color2);
      Serial.println(color3);
      Serial.println(color4);
      Serial.println(color5);
      Serial.println(color6);
      Serial.println(color7);
      Serial.println(color8);
      Serial.println("MAL!!");
      lcd_1.print("Mal!!");
      color1 = 0;
      color2 = 0;
      color3 = 0;
      color4 = 0;
      color5 = 0;
      color6 = 0;
      color7 = 0;
      color8 = 0;
      lcd_1.setCursor(0, 0);
      lcd_1.print("                                      ");
      lcd_1.setCursor(0, 0);
    }
  }
  delay(200); // Wait for 200 millisecond(s)
}
