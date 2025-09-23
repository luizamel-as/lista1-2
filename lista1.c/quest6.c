#include <stdio.h>
int main(){
    int horas, minutos, segundos;

    puts("Digite o número de horas:");
    scanf("%d", &horas);
    puts("Digite o número de minutos:");
    scanf("%d", &minutos);
    puts("Digite o número de segundos:");
    scanf("%d", &segundos);

    printf("Total de segundos: %d\n", (horas*3600)+(minutos*60)+segundos);
    
    return 0;
}