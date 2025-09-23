#include <stdio.h>
#include <math.h>
int main() {
    float n1, n2, n3;
    float media_aritmetica, media_geometrica;

    printf("Digite três numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media_aritmetica = (n1 + n2 + n3) / 3.0f;
    media_geometrica = powf(n1 * n2 * n3, 1.0f/3.0f); 

    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media geometrica: %.2f\n", media_geometrica);

    return 0;
}
