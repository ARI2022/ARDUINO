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

int drive_gb = 5;
int drive_mb = 0;   //definim valors


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                 
Serial.begin(9600); // set up Serial library at 9600 bps
Serial.print("Your HD is ");  //mostra el missatge
Serial.print(drive_gb);       //mostra el missatge
Serial.println(" GB large."); //mostra el missatge fomant la frase "Your HD is 5 GB large."
drive_mb = 1024 * drive_gb;   //aqui calcula la capacitat 
Serial.print("It can store ");//mostra el missatge
Serial.print(drive_mb);       //mostra el valor de drive_mb
Serial.println(" Megabytes!");//mostra el missatge formant la frase " It can store 5120 Megabytes!

                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
