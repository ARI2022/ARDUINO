/*""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
""                                                                                    ""
""                                                                                    "" 
""                                 TÍTOL: HELLO WORLD                                 ""
""                                 GABRIEL JAN IWAN                                   ""
""                                                                                    ""
""                                                                                    ""
""                                                                                    ""
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""*/

//"""""""""""""""""""""""""""""""""""" INCLUDE """""""""""""""""""""""""""""""""""""""""




//"""""""""""""""""""""""""""""""""""" VARIABLES """""""""""""""""""""""""""""""""""""""

const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
const byte pot1 = A1;         // donar nom al pin A0 de l’Arduino

int valPot0; 
int valPot1;


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                  
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida

                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
valPot1 = analogRead(pot1);    // llegir valor potenciòmetre 

  tone(xiulet, valPot1);    // xiulet de durada valPot0
  delay(2*valPot0);
                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
