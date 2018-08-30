#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4MHz)

void main(){

   ext_int_edge(H_TO_L);
   clear_interrupt(INT_EXT);
   enable_interrupts(GLOBAL | INT_EXT);

   while(TRUE){
      
      output_low(pin_b1);
      output_high(pin_b2);
      
      
      while (input(pin_d0) == 0){
         output_low(pin_b2);
         output_high(pin_b1);
      }
   }

}

#INT_EXT
void ext_isr(void){
   output_high(pin_b2);
   output_low(pin_b1);
   while (input(pin_b0) == 0);
   main();
}
