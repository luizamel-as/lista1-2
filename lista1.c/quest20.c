#include <stdio.h>
int main(){
    int x, y;

    puts("Digite um valor inteiro:");
    scanf("%d", &x);
    puts("Digite outro valor inteiro:");
    scanf("%d", &y);

    (x % y == 0)? printf("O primeiro valor é múltiplo do segundo.") : printf("O primeiro valor não é múltiplo do segundo.");

    return 0;
}