#include <stdio.h>
int main(){
    float raio;

    puts("Digite o valor do raio de um círculo:");
    scanf("%f", &raio);

    printf("Diâmetro: %.2f\n", 2*raio);
    printf("Circuferência: %.2f\n", 2*3.14159*raio);
    printf("Área: %.2f\n", 3.14159*raio*raio);

    return 0;
}