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

const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button





//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                  
 pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada 
                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE
  buttonState = digitalRead(buttonPin); //llegir l’estat del button i gardar-lo
  if (buttonState == 0) //polsador premut, muntat amb Pull-up
{
  digitalWrite(led0, HIGH); //codi
}
else //polsador no premut, muntat amb Pull-up
{
  digitalWrite(led0, LOW);  //codi
}
delay(200); //per no estar llegint button molt ràpid

}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
