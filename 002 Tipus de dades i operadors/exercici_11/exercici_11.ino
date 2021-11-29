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

  long drive_gb = 100;
  long drive_mb;
  long drive_kb;
  long real_drive_mb;
  long real_drive_kb;
  long missing_kb;

//""""""""""""""""""""""""""""""""""""" SETUP """"""""""""""""""""""""""""""""""""""""""

void setup()                                 // CONFIGURA EL FINAL DE SORTIDA 
{
  Serial.begin(9600);
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");   

  Serial.print("In theory, it can store ");
  drive_mb = (long)drive_gb * 1024;
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  drive_kb = drive_gb * pow(1024,2);
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  Serial.print("But it really only stores ");
  real_drive_mb = drive_gb * 1000;
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb = drive_gb * 1000000;
  Serial.print(real_drive_kb); 
  Serial.println(" Kilobytes");

  Serial.print("You are missing ");
  missing_kb = drive_kb - real_drive_kb;
  Serial.print(missing_kb);
  Serial.print(" Kilobytes!");  
  
  
                    

                                       
}


//""""""""""""""""""""""""""""""""""""" LOOP """""""""""""""""""""""""""""""""""""""""""
 
void loop() {                                          //INICIA EL PROGRAMA EN BUCLE

                                       
}


//""""""""""""""""""""""""""""""""""""" FUNCIONS """"""""""""""""""""""""""""""""""""""""
