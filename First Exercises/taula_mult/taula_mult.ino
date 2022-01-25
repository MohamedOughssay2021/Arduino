/**********************************************************************************
**                                                                               **
**                          Mohamed Oughssay                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int taula = 2;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  for  (int taula=2; taula <= 10; taula++) //aquí li donem el valor a taula i li diem que ha de ser menor o igual a 10 i que va augmentant 1 cada vegada
  {
  Serial.print("Taula de multiplicar del ");  //aquí li indiquem el titulo
  Serial.println(taula); //aquí li indiquem el numero de la taula
  for (int i=0; i <= 10; i++)  //aquí li indiquem el numero que multiplica i dient-li que ha de ser menor o igual a 10 i que suma un cada vegada
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
