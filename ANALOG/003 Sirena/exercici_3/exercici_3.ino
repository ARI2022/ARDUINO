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



//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                  
pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida

                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {

tone(xiulet, 400 );    // xiulet de durada valPot0
 delay(100);

 tone(xiulet, 500 );    // xiulet de durada valPot0
 delay(100);

 tone(xiulet, 600 );    // xiulet de durada valPot0
 delay(100);

 tone(xiulet, 800 );    // xiulet de durada valPot0
 delay(300);
                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
