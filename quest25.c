#include <stdio.h>
#include <math.h> 
int main() {
    float x1, y1, x2, y2, distancia;
    float dx, dy;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    distancia = sqrtf(dx * dx + dy * dy); 

    printf("Distância: %.2f\n", distancia);

    return 0;
}
