/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                             Mohamed Oughssay                                  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  //valPot0 = analogRead(pot0);    // llegir valor potenciòmetre  //en aquest cas no fa falta  

  tone(xiulet, 1000, 200);    // xiulet de durada valPot0
  delay(200);              // esperar valPot0 del xiulet + valPot0 silenci
  tone(xiulet, 1250, 200);    // xiulet de durada valPot0
  delay(200);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************
