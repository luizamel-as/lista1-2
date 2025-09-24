#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;

    printf("Triplas de Pitagoras (catetos e hipotenusa <= 500):\n");

    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {
            c = (int)sqrt(a*a + b*b);
            if (c <= 500 && a*a + b*b == c*c) {
                printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }

    return 0;
}
