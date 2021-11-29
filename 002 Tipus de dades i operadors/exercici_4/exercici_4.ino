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

int a = 5, b = 10, c = 20;


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
                  
Serial.begin(9600); // set up Serial library at 9600 bps
Serial.println("Here is some math: "); //mostra el missatge "Here is some math: " 
Serial.print("a = ");    //mostra el missatge "a = "
Serial.println(a);       // seguidament del pas anterior mostra el valor d'a
Serial.print("b = ");
Serial.println(b);
Serial.print("c = ");
Serial.println(c);
Serial.print("a + b = "); // mostra el missatge "a + b = "
Serial.println(a + b);    // suma valors a i b i mostra el resultat seguidament del missatge anterior
Serial.print("a * c = "); // multiply
Serial.println(a * c);
Serial.print("c / b = "); // mostra el missatge escrit
Serial.println(c / b);    // despres del missatge del pas anterior mostra el valor de l'operacio
Serial.print("c % b = "); // module
Serial.println(c % b);
Serial.print("b - c = "); 
Serial.println(b - c);
                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""

//
