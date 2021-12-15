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
 //LEDS
const byte led0 = 5; // donar nom al pin 5 de l’Arduino
const byte led1 = 6; // donar nom al pin 6 de l’Arduino
const byte led2 = 7; // donar nom al pin 7 de l’Arduino
const byte led3 = 8; // donar nom al pin 8 de l’Arduino
const byte led4 = 9; // donar nom al pin 9 de l’Arduino
const byte led5 = 10; // donar nom al pin 10 de l’Arduino
const byte led6 = 11; // donar nom al pin 11 de l’Arduino
const byte led7 = 12; // donar nom al pin 12 de l’Arduino

//BOTONS
const byte buttonPin2 = 2; // donar nom al pin 2 de l’Arduino
const byte buttonPin3 = 3; // donar nom al pin 3 de l’Arduino

//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                  
pinMode(led0, OUTPUT); // definir el pin 5 com una sortida
pinMode(led1, OUTPUT); // definir el pin 6 com una sortida
pinMode(led2, OUTPUT); // definir el pin 7 com una sortida
pinMode(led3, OUTPUT); // definir el pin 8 com una sortida
pinMode(led4, OUTPUT); // definir el pin 9 com una sortida
pinMode(led5, OUTPUT); // definir el pin 10 com una sortida
pinMode(led6, OUTPUT); // definir el pin 11 com una sortida
pinMode(led7, OUTPUT); // definir el pin 12 com una sortida
pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada
pinMode(buttonPin3, INPUT); // definir el pin 3 com una entrada
                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

  if (buttonPin2 == 1);
   {                                    
     //qaui hauria de sumar 1, ak binari.... ?
   }

}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
