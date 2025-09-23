#include <stdio.h>
int main(){
    float cotacao, real, dolar;

    puts("Digite o valor da cotação do dólar:");
    scanf("%f", &cotacao);
    puts("Digite a quantidade de reais que deseja converter:");
    scanf("%f", &real);

    dolar = real / cotacao;

    printf("Valor da conversão em dólar: %.2f US$\n", dolar);

    return 0;
} 