#include <stdio.h>
int main(){
    float volume, comprimento, altura, largura;

    puts("Digite o comprimento:");
    scanf("%f", &comprimento);
    puts("Digite a altura:");
    scanf("%f", &altura);
    puts("Digite a largura:");
    scanf("%f", &largura);

    volume = comprimento * altura * largura;

    printf("Volume: %.2f", volume);

    return 0;
}