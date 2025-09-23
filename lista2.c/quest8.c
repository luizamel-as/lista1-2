#include <stdio.h>
#include <math.h>
int main() {
    double valor, entrada;
    int prestacao;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%lf", &valor);

    prestacao = (int)(valor / 3);
    entrada = valor - 2 * prestacao;

    printf("\nValor da entrada: R$ %.2f\n", entrada);
    printf("Valor das duas prestacoes: R$ %d cada\n", prestacao);

    return 0;
}
