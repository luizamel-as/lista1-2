#include <stdio.h>
int main(){
    int n, maior;
    
    puts("Digite um valor:");
    scanf("%d", &n);
    maior = n;
    
    while(n != 0){
        if (n > maior){
            maior = n;
        }
        scanf("%d", &n);
    }
    printf("Maior valor: %d\n", maior);
    return 0;
}