#include <HardwareTimer.h>
#include "hex.h"  
unsigned int p = 0            ;   //  char Text [6]; 
HardwareTimer pwmtimer2(  1 ) ;  //  http://docs.leaflabs.com/static.leaflabs.com/pub/leaflabs/maple-docs/latest/lang/api/hardwaretimer.html       
void setup() {  
  pinMode( PA8 , PWM)  ;
  // Serial.begin(9600);
 pwmtimer2.pause();
 pwmtimer2.setPrescaleFactor(    17.5    ) ;
// divid factor for main frequency , if  /2 = 36,000,000     .
    pwmtimer2.setOverflow (   256   ) ; //  1500   2000
    pwmtimer2.refresh();
    pwmtimer2.resume();    //pwmtimer2.();
    pwmWrite( PA8  ,0   ) ;
     }

void loop() {
char sample = pgm_read_byte(  &quack_wav[p++]   )  ;  // * 1.6   
pwmWrite( PA8  , sample    )   ;   //  * 64 
// 65536  ÷  4096
if ( p == quack_wav_len ) {    p=0;     }  
          delayMicroseconds( 100  );  //  62.5  ×2
          }
