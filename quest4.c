#include <stdio.h>
int main(){
    float x;

    puts("Digite o valor da conta do restaurante:");
    scanf("%f", &x);

    printf("Total a ser pago: %.2f\n", 1.1*x);
    
    return 0;
}