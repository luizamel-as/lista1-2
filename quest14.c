#include <stdio.h>
int main(){
    int dias;
    float valor;

    puts("Digite o número de dias trabalhados:");
    scanf("%d", &dias);
    
    if (dias < 10){
        valor = 50.25 * dias * 0.9;
        printf("Valor líquido a ser pago: %.2f\n", valor);
    }
    else if (dias<=20){
        valor = 50.25 * dias * 1.2 * 0.9;
        printf("Valor líquido a ser pago: %.2f\n", valor); 
    }
    else {
        valor = 50.25 * dias * 1.3 * 0.9;
        printf("Valor líquido a ser pago: %.2f\n", valor);
    }  
return 0;
}