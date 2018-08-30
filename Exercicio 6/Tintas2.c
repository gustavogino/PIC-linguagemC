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
      output_high(pin_c2);
      
      if (input(pin_d0) == 0){
         while (input(pin_d1) == 1){ 
            output_high(pin_c0);
            output_high(pin_c1);
            output_low(pin_c2);
         }
         
         output_low(pin_c0);
         output_low(pin_c1);
         output_high(pin_c3);
         delay_ms(2000);
         output_low(pin_c3);
      }
      
   }

}

void restart(void){
   while (input(pin_d2)){
   }
   
   output_low(pin_c4);
   
   main();

}

#INT_EXT
void ext_isr(void){
   output_low(pin_c0);
   output_low(pin_c1);
   output_low(pin_c2);
   output_low(pin_c3);
   output_high(pin_c4);
   
   restart();
}
