#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4MHz)

void main(){

   while(TRUE){
      output_high(pin_b2);
      
      if (input(pin_d0) == 0){
         while (input(pin_d1) == 1){
            output_high(pin_b0);
            output_high(pin_b1);
            output_low(pin_b2);
         }
         
         output_low(pin_b0);
         output_low(pin_b1);
         output_high(pin_b3);
         delay_ms(10000);
         output_low(pin_b3);
      }
      
      
      
      
   }

}
