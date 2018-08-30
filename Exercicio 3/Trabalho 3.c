#include <16F877A.h>
#FUSES XT,NOWDT,NOPUT,NOBROWNOUT,NOLVP,NOCPD,NOWRT
#use delay(clock=4000000)


void main()                //Programa principal
{
  set_tris_c(0xFF);
  int16 tempo;             //Cria a vari?vel tempo
  int16 botao1;
  int16 botao2;

  Port_b_pullups(true);    //ativa res. de pull-up 
  tempo=2000;   
  while (true)
  {
     menu:
     botao1 = input(PIN_C0);
     botao2 = input(PIN_C1);
     
     if ((botao1 == 0) && (botao2 == 0)){
         output_high(PIN_B0);
         delay_ms(tempo);
         output_low(PIN_B0);
         goto loop;
     }
  }
   while (true){
         loop:
         botao1 = input(PIN_C0);
         botao2 = input(PIN_C1);
          if ((botao1 == 1) && (botao2 == 1)){
               goto menu;
          }
         }
}

