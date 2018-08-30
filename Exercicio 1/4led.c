#include <16F877A.h>
#FUSES XT,NOWDT,NOPUT,NOBROWNOUT,NOLVP,NOCPD,NOWRT
#use delay(clock=4000000)


void main()                //Programa principal
{
  int16 tempo;             //Cria a vari?vel tempo

  Port_b_pullups(true);    //ativa res. de pull-up 
  tempo=100;
  while (true)
  {
    output_LOw(PIN_B0);
    output_LOw(PIN_B1);
    output_LOw(PIN_B2);
    output_LOw(PIN_B3);
    
    delay_ms(tempo);    
    output_high(PIN_B3); 
    delay_ms(tempo);     
    output_LOw(PIN_B3);    
    
         
    output_high(PIN_B2);
    delay_ms(tempo);
    output_LOw(PIN_B2); 
    
           
    output_high(PIN_B1);   
    delay_ms(tempo);
    output_LOw(PIN_B1);
    
         
    output_high(PIN_B0);   
    delay_ms(tempo);
    output_LOw(PIN_B0);
  }
}
