#include <stdio.h>

int main(void) {
    int inicio;
    int fim;
    
    printf("Insira o primeiro número: ");
    scanf("%d", &inicio);
    
    printf("Insira o segundo número: ");
    scanf("%d", &fim);
        
    printf("Números entre %d e %d: ", inicio, fim);
    for (int n = inicio+1; n < fim; n++) 
    printf("%d ", n);
    
    return 0;
}
