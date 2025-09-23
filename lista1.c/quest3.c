#include <stdio.h>
int main(){
    int x;
    
    puts("Digite um valor inteiro:");
    scanf("%d", &x);

    printf("Triplo: %d\n", 3*x);
    printf("Quadrado: %d\n", x*x);
    printf("Metade: %.1f\n", 0.5*x);

    return 0;
}