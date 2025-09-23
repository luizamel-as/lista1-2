#include <stdio.h>
int main(){
    float x;

    puts("Digite um valor real:");
    scanf("%f", &x);

    printf("Valor com uma casa decimal: %.1f\n", x);
    
    return 0;
}