#include <stdio.h>
int main(){
    float altura, peso;
    char sexo;

    puts("Digite a altura (em metros):");
    scanf("%f", &altura);
    puts("Digite o sexo (M/F):");
    scanf(" %c", &sexo);

    peso = (sexo == 'M')? (72.7 * altura) - 58: (62.1 * altura) - 44.7;

    printf("Peso ideal: %.2f kg\n", peso);
    
    return 0;
}