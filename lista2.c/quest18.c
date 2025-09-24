#include <stdio.h>
#include <math.h>
int main() {
    int i;
    unsigned long long soma = 0, graos;

    for (i = 0; i < 64; i++) {
        graos = (unsigned long long)pow(2, i); // 2^i
        soma += graos;
    }

    printf("Somatorio total de graos no tabuleiro de xadrez = %llu\n", soma);

    return 0;
}
