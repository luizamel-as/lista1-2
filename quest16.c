#include <stdio.h>
int main() {
    int num, modulo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    modulo = (num < 0) ? -num : num;

    printf("Valor absoluto: %d\n", modulo);

    return 0;
}
