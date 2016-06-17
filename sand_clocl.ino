

/****************************************************************************
sand clock using arduino
by
Md mortuza hossain mim

in arduino pin 7 is use as divider of led
pin 8 to 13 use as updise
pin 1 to 6 use ad down side
 
****************************************************************************/


int i;//for number of clock

/****************************************************************************
                          SETUP FUNCTION
****************************************************************************/

void setup() {
  for (i=1;i<=13;i++){
  pinMode(i,1);//pin 1 to 13 as output
  }
}

/****************************************************************************
                             LOOP FUNCTION
****************************************************************************/

#define d 10000 // for delay

void loop() {
  _all_off();
  _sec1();
  delay(d);
  _sec2();
  delay(d);
  _sec3();
  delay(d);
  _sec4();
  delay(d);
  _sec5();
  delay(d);
  _sec6();
  delay(9000);
  _all_down_on();
  delay(1000);//hold down in bottom
}

/****************************************************************************
                   ALL FUNCTION FOR EVERY 10 SEC
****************************************************************************/

//for first secound

void _sec1(){
  for(i=8;i<=13;i++){
    digitalWrite(i,1);
  }
  for(i=1;i<=6;i++){
    digitalWrite(i,0);
  }
}

//for 2ND secound

void _sec2(){
    digitalWrite(13,0);
    for(i=8;i<=12;i++){
    digitalWrite(i,1);
  }
   for(i=1;i<=6;i++){
    digitalWrite(i,0);
    }
   digitalWrite(1,1);
}

//for 3rd secound

void _sec3(){
  digitalWrite(13,0);
  digitalWrite(12,0);
    for(i=8;i<=11;i++){
    digitalWrite(i,1);
  }
   for(i=1;i<=6;i++){
    digitalWrite(i,0);
    }
   digitalWrite(1,1);
   digitalWrite(2,1);
}

//for 4th secound

void _sec4(){
    for(i=11;i<=13;i++)
    {
      digitalWrite(i,0);
    }
    for(i=8;i<=10;i++)
    {
      digitalWrite(i,1);
    }
   for(i=1;i<=6;i++)
   {
     digitalWrite(i,0);
   }
   for(i=1;i<=3;i++)
   {
     digitalWrite(i,1);
   }
}

//for 5th secound

void _sec5(){
    for(i=10;i<=13;i++)
     {
       digitalWrite(i,0);
     }
    for(i=8;i<=9;i++)
     {
      digitalWrite(i,1);
     }
   for(i=5;i<=6;i++)
    {
     digitalWrite(i,0);
    }
    for(i=1;i<=4;i++)
   {
     digitalWrite(i,1);
   }
}

//for 6th secound

void _sec6(){
  for(i=9;i<=13;i++)
   {
     digitalWrite(i,0);
   }
    for(i=8;i<=8;i++){
    digitalWrite(i,1);
  }
   for(i=1;i<=5;i++){
    digitalWrite(i,1);
   }
   digitalWrite(6,0);
}

/*********************************************************************************
                  FUNCTION FOR ALL BOTTOM DOWN FOR 1 SEC
**********************************************************************************/

void _all_down_on(){
 for(i=1;i<=6;i++){
  digitalWrite(i,1);
 }
 for(i=8;i<=13;i++){
  digitalWrite(i,0);
 }
}


/****************************************************************************
                           FUNCTION FOR ALL OFF
****************************************************************************/

void _all_off(){
   for (i=1;i<=13;i++){
    digitalWrite(i,0);
  }
  _mid_on();
}



/****************************************************************************
                            FUNCTION FOR MID ALL TIME ON
****************************************************************************/

void _mid_on(){
  digitalWrite(7,1);
}
