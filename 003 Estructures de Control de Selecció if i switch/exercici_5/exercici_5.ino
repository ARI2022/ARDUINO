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

float Indicadr = 15;


//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
 Serial.begin(9600);

  if (Indicadr < 3.5)
    {
    Serial.print("Qualificació energètica A"); 
    }
  else if (Indicadr < 6.5 && Indicadr >= 3.5)
    {
      Serial.print("Qualificació energètica B");
    }
  else if (Indicadr < 11.1 && Indicadr >= 6.5)
    {
      Serial.print("Qualificació energètica C");
    }
   else if (Indicadr < 17.7 && Indicadr >= 11.1)
    {
      Serial.print("Qualificació energètica D");
    }
   else if (Indicadr < 38.2 && Indicadr >= 17.7)
    {
      Serial.print("Qualificació energètica E");
    }
   else if (Indicadr < 43.2 && Indicadr >= 38.2 )
    {
      Serial.print("Qualificació energètica F");
    }
   else
    {
      Serial.print("Qualificació energètica G");
    }

}

                                       



//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
