#include <stdio.h>
int main() {
    int n, i;
    double pi = 0.0, termo;

    printf("Digite o numero de termos da serie para aproximar pi: ");
    scanf("%d", &n);

    printf("Termo\tAproximacao de pi\n");

    for (i = 0; i < n; i++) {
        termo = 4.0 / (2*i + 1);
        termo = (i % 2 == 0) ? termo : -termo; 
        pi += termo;
        printf("%d\t%.10f\n", i+1, pi);
    }

    return 0;
}