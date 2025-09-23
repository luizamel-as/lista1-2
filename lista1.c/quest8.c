#include <stdio.h>
int main(){
    int x;
    
    puts("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("Sucessor: %d\n", x + 1);
    printf("Antecessor: %d\n", x - 1);

    return 0;
}
