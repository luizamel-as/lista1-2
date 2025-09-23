#include <stdio.h>
int main(){
    int x, y;

    puts("Digite um número:");
    scanf("%d", &x);
    puts("Digite outro número:");
    scanf("%d", &y);

    printf("Soma: %d\n", x+y);
    printf("Produto: %d\n", x*y);
    printf("Diferença: %d\n", x-y);
    printf("Quociente: %d\n", x/y);
    printf("Resto: %d\n", x%y);

    return 0;
} 