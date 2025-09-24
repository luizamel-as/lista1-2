#include <stdio.h>
#include <math.h>
int main() {
    int i;
    printf("Potencias de base 3 (expoente de 0 a 7):\n");

    for (i = 0; i <= 7; i++) {
        printf("3^%d = %.0f\n", i, pow(3, i));
    }

    return 0;
}