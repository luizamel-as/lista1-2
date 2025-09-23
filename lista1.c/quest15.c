#include <stdio.h>
int main (){
    float valor_hora, desconto, salario_liquido, salario_bruto;
    int num_horas;
    
    puts("Digite o valor da hora aula:");
    scanf("%f", &valor_hora);
    puts("Digite o número de horas trabalhadas no mês:");
    scanf("%d", &num_horas);
    puts("Digite o percentual de desconto do INSS:");
    scanf("%f", &desconto);

    salario_bruto = valor_hora * num_horas;
    printf("Salário bruto: %.2f\n", salario_bruto);

    salario_liquido = salario_bruto - (salario_bruto * desconto/100);
    printf("Salário líquido: %.2f\n", salario_liquido);

    return 0;
}