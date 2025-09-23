#include <stdio.h>
int main(){
    int x;
    while (x != 0) {
        puts("Digite um número de 1 a 7:");
        scanf("%d", &x);
        switch(x){
            case 1:
            printf("Domingo\n");
            break;
            case 2:
            printf("Segunda-feira\n");
            break;
            case 3:
            printf("Terça-feira\n");
            break;
            case 4:
            printf("Quarta-feira\n");
            break;
            case 5:
            printf("Quinta-feira\n");
            break;
            case 6:
            printf("Sexta-feira\n");
            break;
            case 7:
            printf("Sábado\n");
            break;
            default:
            printf("Número de dia não válido\n");
        }
    } 
    printf("Programa encerrado.\n");
    return 0;
}