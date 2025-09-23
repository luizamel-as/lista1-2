#include <stdio.h>
int main(){
    int x;

    puts("Digite um valor inteiro:");
    scanf("%d", &x);

    (x % 2 == 0)? printf("O número é par") : printf("O número é ímpar");

    return 0;
}