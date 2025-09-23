#include <stdio.h>
int main(){
    int f, i;
    int fatorial = 1;

    puts("Digite um número inteiro e positivo:");
    scanf("%d", &f);

    for (i = 1; i <= f; i++){
        fatorial *= i;
    }
    printf("Fatorial: %d\n", fatorial);
    return 0;
}