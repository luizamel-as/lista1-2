#include <stdio.h>
int main(){
    float x, y;

    puts("Digite um valor x:");
    scanf("%f", &x);
    puts("Digite um valor y:");
    scanf("%f", &y);

    while (y == 0){
        puts("Digite outro valor para y:");
        scanf("%f", &y);
    }
    printf("Resultado da divisão de x por y: %.2f\n", x/y);
    return 0;
}