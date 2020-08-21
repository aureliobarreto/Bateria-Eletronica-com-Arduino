//==============================
//     SETUP
//==============================
void setup()
{


  GlobalTime=TIMEFUNCTION;


    
    //Pin[count].Time=Time+Pin[count].MaskTime;
    //MaxReadingSensor[count]=-1;
    //MaxRetriggerSensor[count]=0;//0xFF;
    byte i = 0;
    for (i; i< NPin; i++){
      Pin[i].set(i);
    }
   /* byte digital = 15;
    
    for (i; i<Npin + NpinD; i++){
      Pin[i].set(digital);
      digital++; 
    }
 */

  
    Serial.begin(115200);    //Serial
    Serial.flush();
   

  
}
