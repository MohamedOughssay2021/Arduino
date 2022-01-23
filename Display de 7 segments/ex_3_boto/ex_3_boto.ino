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
const int buttonPin = 2;     // donar nom al pin 2 de l’Arduino
boolean buttonEstat = HIGH;   // definir variable d'estat pel polsador
boolean buttonEstatPrevi = HIGH;

int num = 0;                 // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT);      // definir el pin 2 com una entrada
  
  digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11  
}

//********** Loop *****************************************************************
void loop()
{ 
  delay(500);    
  buttonEstat = digitalRead(buttonPin);
  Serial.print(buttonEstat);
  if (buttonEstat != buttonEstatPrevi)
  { 
    Serial.print("boto");
    buttonEstatPrevi = buttonEstat;
  }
  if (buttonEstatPrevi == HIGH)
  {
    num = num + 1;              
    if (num == 10) num = 0;          
  }
  switch(num)
  {
    case 0:
      digitalWrite(segA, LOW);    
      digitalWrite(segB, LOW);     
      digitalWrite(segC, LOW);     
      digitalWrite(segD, LOW);     
      digitalWrite(segE, LOW); 
      digitalWrite(segF, LOW);    
      digitalWrite(segG, HIGH);       
      break;
    case 1:   
      digitalWrite(segA, HIGH);             
      digitalWrite(segD, HIGH);     
      digitalWrite(segE, HIGH);     
      digitalWrite(segF, HIGH);        
      break;
    case 2:  
      digitalWrite(segA, LOW);            
      digitalWrite(segC, HIGH);     
      digitalWrite(segD, LOW);     
      digitalWrite(segE, LOW);     
      digitalWrite(segG, LOW);   
      break;  
    case 3:        
      digitalWrite(segC, LOW);            
      digitalWrite(segE, HIGH);     
      break;  
    case 4:   
      digitalWrite(segA, HIGH);        
      digitalWrite(segD, HIGH);     
      digitalWrite(segF, LOW);     
      break;  
    case 5:        
      digitalWrite(segA, LOW);    
      digitalWrite(segB, HIGH); 
      digitalWrite(segD, LOW);   
      break;  
    case 6:            
      digitalWrite(segA, HIGH);            
      digitalWrite(segE, LOW);   
      break;  
    case 7:             
      digitalWrite(segA, LOW);   
      digitalWrite(segB, LOW);  
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);    
      break;  
    case 8:          
      digitalWrite(segD, LOW);    
      digitalWrite(segE, LOW); 
      digitalWrite(segF, LOW);    
      digitalWrite(segG, LOW);   
      break;  
    case 9:            
      digitalWrite(segD, HIGH);    
      digitalWrite(segE, HIGH);    
      break;  
  }    
}

//********** Funcions **********************************************************
