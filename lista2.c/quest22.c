#include <stdio.h>
int main() {
    int num, digito, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        digito = num % 10;
        if (digito == 7) contador++;
        num /= 10;
    }

    printf("Quantidade de algarismos 7 = %d\n", contador);

    return 0;
}