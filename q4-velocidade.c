#include <stdio.h>

int main(void){
   float mil = 1.6;
   float vel;

   printf("Velocidade atual do carro (em mph): ");
   scanf("%f", &vel);

   vel = vel * mil;

   if(vel < 80){
       printf("ACELERE");
   }
   else if(vel > 100){
       printf("DESACELERE");
   }
   else if(vel >= 80 && vel<= 100){
       printf("MANTENHA");
   }

   return 0;
}
