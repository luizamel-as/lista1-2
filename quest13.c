#include <stdio.h>
int main(){
    float C, F;

    puts("Digite a temperatura em graus Celsius:");
    scanf("%f", &C);
    
    F = (9*C + 160)/5;

    printf("Temperatura em graus Fahrenheit: %.1f\n", F);

    return 0;
}