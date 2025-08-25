#include <stdio.h>

int main(void){
   int num;
   int soma = 0;

   printf("Digite um número: ");
   scanf("%d", &num);

   while(num != 0){
       soma = soma + num;
       printf("Digite um número: ");
       scanf("%d", &num);
   }
   printf("Soma dos números: %d", soma);
  
   return 0;
} 