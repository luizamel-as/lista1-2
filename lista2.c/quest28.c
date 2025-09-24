#include <stdio.h>
int main() {
    unsigned char X, Y;
    unsigned char vet[20];
    int i;

    for (i = 0; i < 20; i++) {
        vet[i] = i; 
    }

    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &X);
    printf("Digite o valor de Y (>=5 e <=15 para exemplo de vetor 20): ");
    scanf("%hhu", &Y);

    if (Y < 5 || Y > 15) {
        printf("Valor de Y invalido para operacao.\n");
        return 1;
    }

    for (i = Y - 4; i < Y; i++) {
        vet[i] = (vet[i] & 0xFE) | (X & 1);
    }

    for (i = Y + 1; i <= Y + 4; i++) {
        vet[i] = (vet[i] & 0xFE) | (X & 1); 
    }

    printf("Vetor apos esconder bits de X:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
