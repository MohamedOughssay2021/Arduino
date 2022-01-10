/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                              Mohamed Oughssay                                 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte segA = 11;          // donar nom al pin 5 de l’Arduino
const byte segB = 5;          // donar nom al pin 6 de l’Arduino
const byte segC = 6;          // donar nom al pin 7 de l’Arduino
const byte segD = 7;          // donar nom al pin 8 de l’Arduino
const byte segE = 8;          // donar nom al pin 9 de l’Arduino
const byte segF = 9;         // donar nom al pin 10 de l’Arduino
const byte segG = 12;         // donar nom al pin 11 de l’Arduino
const byte segH = 10;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(segH, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, HIGH);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, HIGH);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, HIGH);     // posar a 0V el pin 8
  digitalWrite(segE, HIGH);     // posar a 0V el pin 9
  digitalWrite(segF, HIGH);     // posar a 0V el pin 10
  digitalWrite(segG, HIGH);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, HIGH);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, HIGH);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, HIGH);     // posar a 0V el pin 9
  digitalWrite(segF, HIGH);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, HIGH);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, HIGH);     // posar a 0V el pin 8
  digitalWrite(segE, HIGH);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, HIGH);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, HIGH);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, HIGH);     // posar a 0V el pin 5
  digitalWrite(segB, HIGH);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, HIGH);     // posar a 0V el pin 8
  digitalWrite(segE, HIGH);     // posar a 0V el pin 9
  digitalWrite(segF, HIGH);     // posar a 0V el pin 10
  digitalWrite(segG, HIGH);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

      digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

    digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, HIGH);     // posar a 0V el pin 8
  digitalWrite(segE, HIGH);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11
  digitalWrite(segH, LOW);     // posar a 0V el pin 12
  
  delay(500);                  // es queden leds 500ms encesos

  
}

//********** Funcions *************************************************************
