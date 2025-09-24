#include <stdio.h>
int main() {
    int A, B, inicio, fim, i, contador = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    inicio = (A < B) ? A : B;
    fim = (A > B) ? A : B;

    for (i = inicio; i <= fim; i++) {
        if (i % 3 == 0) contador++;
    }

    printf("\nQuantidade de numeros divisiveis por 3 entre %d e %d = %d\n", (A<B)?A:B, (A>B)?A:B, contador);

    return 0;
}
