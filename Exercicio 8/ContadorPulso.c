#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4MHz)

void main(){
   int cont = 0;
   
   while(TRUE){
      output_toggle(pin_b1);
      
      while (input(pin_d0) == 1);
      
      cont++;
      
      while (input(pin_d0) == 0);
      
      if (cont % 10 == 0 || cont == 10){
         output_toggle(pin_b0);
      }
   }
}
