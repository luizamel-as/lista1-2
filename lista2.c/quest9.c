#include <stdio.h>
int main() {
    int i;
    long long int a = 1, b = 1, proximo;

    printf("Serie de Fibonacci ate o 20º termo:\n");
    printf("%lld, %lld", a, b);

    for(i = 3; i <= 20; i++) {
        proximo = a + b;
        printf(", %lld", proximo);
        a = b;
        b = proximo;
    }

    printf("\n");
    return 0;
}
