#include <stdio.h>
int main() {
    int A, B, i, inicio, fim;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    inicio = (A < B) ? A : B;
    fim = (A > B) ? A : B;

    if (inicio % 4 != 0) inicio += (4 - (inicio % 4));

    printf("\nQuadrados dos numeros multiplos de 4 entre %d e %d:\n", (A<B)?A:B, (A>B)?A:B);
    for (i = inicio; i <= fim; i += 4) {
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}
