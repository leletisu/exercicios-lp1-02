#include <stdio.h>

int main(){
   int n1;
   int n2;
  
   printf("Insira um número: ");
   scanf("%d", &n1);

   printf("Insira outro número: ");
   scanf("%d", &n2);

   if (n1 > n2){
       printf("Maior número: %d\n", n1);
   }
   else{
       printf("Maior número: %d\n", n2);
   }
   return 0;
}
