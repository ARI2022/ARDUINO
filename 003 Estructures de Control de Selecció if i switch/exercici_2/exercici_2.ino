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

int Temperatura = 120;


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
Serial.begin(9600);
if (Temperatura > 100)
 {
    Serial.print("Aigua bullint!");                    
 }
 else
 {
   Serial.print("Aigua encara no bull");
  
 }
                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
