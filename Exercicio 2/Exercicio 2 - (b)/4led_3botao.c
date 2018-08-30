#include <16F877A.h>
#FUSES XT,NOWDT,NOPUT,NOBROWNOUT,NOLVP,NOCPD,NOWRT
#use delay(clock=4000000)


void main()                //Programa principal
{
  set_tris_c(0xFF);
  int16 tempo;             //Cria a vari?vel tempo
  int16 botao1;
  int16 botao2;
  int16 botao3;
  int16 switch1;

  Port_b_pullups(true);    //ativa res. de pull-up 
  tempo=100;   
  while (true)
  {
     botao1 = input(PIN_C0);
     botao2 = input(PIN_C1);
     botao3 = input(PIN_C2);
     switch1 = input(PIN_C3);
     
     if (switch1 == 1){
         if (botao1 == 0){
      
            output_LOw(PIN_B0);
            output_LOw(PIN_B1);
            output_LOw(PIN_B2);
            output_LOw(PIN_B3); 
    
            delay_ms(tempo);    
            output_high(PIN_B0); 
            delay_ms(tempo);     
            output_LOw(PIN_B0);    
         
            output_high(PIN_B2);
            delay_ms(tempo);
            output_LOw(PIN_B2); 
      
            output_high(PIN_B3);   
            delay_ms(tempo);
            output_LOw(PIN_B3);
         
            output_high(PIN_B1);   
            delay_ms(tempo);
            output_LOw(PIN_B1);
         }
     
         else if (botao2 == 0){
     
            delay_ms(tempo);    
            output_high(PIN_B3); 
            delay_ms(tempo);     
            output_LOw(PIN_B3);    
         
            output_high(PIN_B1);
            delay_ms(tempo);
            output_LOw(PIN_B1); 
      
            output_high(PIN_B0);   
            delay_ms(tempo);
            output_LOw(PIN_B0);
         
            output_high(PIN_B2);   
            delay_ms(tempo);
            output_LOw(PIN_B2);
         }
     
         else if (botao3 == 0){
 
            delay_ms(tempo);    
            output_high(PIN_B0); 
            output_high(PIN_B3);
            delay_ms(tempo);     
            output_LOw(PIN_B0);
            output_Low(PIN_B3);
         
            output_high(PIN_B1);
            output_high(PIN_B2);
            delay_ms(tempo);
            output_LOw(PIN_B1);
            output_Low(PIN_B2);
         
            output_high(PIN_B3);   
            delay_ms(tempo);
            output_LOw(PIN_B3);
         }
        
         else{
       
            output_LOw(PIN_B0);
            output_LOw(PIN_B1);
            output_LOw(PIN_B2);
            output_LOw(PIN_B3); 
    
            delay_ms(tempo);    
            output_high(PIN_B0); 
            delay_ms(tempo);     
            output_LOw(PIN_B0);    
         
            output_high(PIN_B1);
            delay_ms(tempo);
            output_LOw(PIN_B1); 
      
            output_high(PIN_B2);   
            delay_ms(tempo);
            output_LOw(PIN_B2);
         
            output_high(PIN_B3);   
            delay_ms(tempo);
            output_LOw(PIN_B3);
         }
      }
      else if(switch1 == 0){
      if (botao1 == 0){
      
            output_LOw(PIN_B0);
            output_LOw(PIN_B1);
            output_LOw(PIN_B2);
            output_LOw(PIN_B3); 
    
            delay_ms(tempo);    
            output_high(PIN_B1); 
            delay_ms(tempo);     
            output_LOw(PIN_B1);    
         
            output_high(PIN_B3);
            delay_ms(tempo);
            output_LOw(PIN_B3); 
      
            output_high(PIN_B2);   
            delay_ms(tempo);
            output_LOw(PIN_B2);
         
            output_high(PIN_B0);   
            delay_ms(tempo);
            output_LOw(PIN_B0);
         }
     
         else if (botao2 == 0){
     
            delay_ms(tempo);    
            output_high(PIN_B2); 
            delay_ms(tempo);     
            output_LOw(PIN_B2);    
         
            output_high(PIN_B0);
            delay_ms(tempo);
            output_LOw(PIN_B0); 
      
            output_high(PIN_B1);   
            delay_ms(tempo);
            output_LOw(PIN_B1);
         
            output_high(PIN_B3);   
            delay_ms(tempo);
            output_LOw(PIN_B3);
         }
     
         else if (botao3 == 0){
            
            delay_ms(tempo);
            output_high(PIN_B3);   
            delay_ms(tempo);
            output_LOw(PIN_B3);
            
            delay_ms(tempo);    
            output_high(PIN_B1); 
            output_high(PIN_B2);
            delay_ms(tempo);     
            output_LOw(PIN_B1);
            output_Low(PIN_B2);
         
            output_high(PIN_B0);
            output_high(PIN_B3);
            delay_ms(tempo);
            output_LOw(PIN_B0);
            output_Low(PIN_B3);
            delay_ms(tempo);
         }
        
         else{
       
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
   }   
}

