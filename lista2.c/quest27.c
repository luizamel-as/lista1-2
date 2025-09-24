#include <stdio.h>
int main() {
    int num, maior, menor;
    int primeiro = 1;

    while (1) {
        printf("Digite um numero inteiro (negativo e par para sair): ");
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0) break;

        if (primeiro) {
            maior = menor = num;
            primeiro = 0;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    if (primeiro) {
        printf("Nenhum numero valido foi digitado.\n");
    } else {
        printf("Produto do maior pelo menor = %d\n", maior * menor);
    }

    return 0;
}