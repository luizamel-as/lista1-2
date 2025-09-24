#include <stdio.h>
int main() {
    int i, j;
    unsigned long long fatorial;

    printf("Fatoriais dos numeros impares de 1 a 10:\n");

    for (i = 1; i <= 10; i += 2) {
        fatorial = 1;
        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }
        printf("%d! = %llu\n", i, fatorial);
    }

    return 0;
}
