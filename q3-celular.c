#include <stdio.h>

int main(void){
    
    float dol = 3.17;
    float cel_dolar;
    float cel_real;
    
    printf("Insira o preço do celular em dólares: ");
    scanf("%f", &cel_dolar);
    
    cel_real = cel_dolar * dol;
    
    if(cel_real <= 1000){
        printf("BOM NEGÓCIO");
    }
    
    return 0;
}