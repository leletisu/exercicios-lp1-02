#include <stdio.h>

int main() {
    int n;
    int i;
    int somatorio = 0;

    printf("Insira o valor de N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        somatorio += i * i; 
    }
    
    printf("Soma dos quadrados de 1 até %d: %d\n", n, somatorio);
    
    return 0;
}