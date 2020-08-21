

//==============================
//     LOOP
//==============================
void loop()
{


//Serial.print("Leu");
  //==========UNROLLING======
  //{0, 1, 3, 2, 6, 7, 5, 4}
  //=========================
  
 
  for (byte c = 0; c < NPin; c++) {
    //delayMicroseconds(delayTime);
    if (Pin[c].Type != Disabled)
    {
      Pin[c].scan(c);
      if (Pin[c].State == Scan_Time)
      {
        Pin[c].scan(c);
        Pin[c].scan(c);
        Pin[c].scan(c);
      }
   }
    Pin[c].play(c);

    
  }





 

  //===============================
  if (Mode == Standby) return;
  //===============================
}

