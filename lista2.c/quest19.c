#include <stdio.h>
int main() {
    int A, B, inicio, fim, i, soma = 0, qtd = 0;
    double media;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    inicio = (A < B) ? A : B;
    fim = (A > B) ? A : B;

    for (i = inicio; i <= fim; i++) {
        soma += i;
        qtd++;
    }

    media = (qtd > 0) ? (double)soma / qtd : 0;

    printf("\nMedia aritmetica dos inteiros entre %d e %d = %.2f\n", (A<B)?A:B, (A>B)?A:B, media);

    return 0;
}
