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

int taula = 2;


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
 Serial.begin(9600); // set up Serial library at 9600 bps
Serial.print("Taula de multiplicar del ");
Serial.println(taula);
for (int i=0; i <= 10; i++)
{
delay(100);
Serial.print(taula);
Serial.print(" x ");
Serial.print(i);
Serial.print( " = ");                 
Serial.println(taula*i);
}
                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
