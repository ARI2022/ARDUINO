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

  int num = 10;


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                  
Serial.begin(9600); // set up Serial library at 9600 bps
Serial.println("Ara faré el compte enrere per l'explosió:");
for (int i=0; i <= 10; i++)
{
delay(1000);
Serial.println(num);
num = num - 1;
}
Serial.println(" B O O O M !!! ");
                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
