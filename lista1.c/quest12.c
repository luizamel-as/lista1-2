#include <stdio.h>
int main(){
    int a, b, c;

    puts("Digite um valor para a variável A:");
    scanf("%d", &a);
    puts("Digite um valor para a variável B:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Valor de A após a efetivação da troca: %d\n", a);
    printf("Valor de B após a efetivação da troca: %d\n", b);

    return 0;
}