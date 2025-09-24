#include <stdio.h>
int main() {
    int A, B, inicio, fim, i, soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    inicio = (A < B) ? A : B;
    fim = (A > B) ? A : B;

    if (inicio % 2 != 0) inicio++;
    for (i = inicio; i <= fim; i += 2) {
        soma += i;
    }

    printf("\nSomatorio dos pares entre %d e %d = %d\n", (A<B)?A:B, (A>B)?A:B, soma);

    return 0;
}
