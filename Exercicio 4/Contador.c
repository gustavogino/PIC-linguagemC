#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4MHz)


int n = 0;

void incrementa(){
   delay_ms(300);
   n = n +1;
}

void decrementa(){
   delay_ms(300);
   n = n - 1;
}

void main(){

   while(TRUE){
      if (input(pin_d0) == 0){
         incrementa();
      }
      
      if (input(pin_d1) == 0){
         decrementa();
      }
      
      if (n == 0){
         output_high(pin_b0);
      }
      else if(n == 10){
         output_high(pin_b1);
      }
      else {
         output_low(pin_b0);
         output_low(pin_b1);
      }
      
   }

}
