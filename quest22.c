#include <stdio.h>
int main() {
    int num, centena, dezena, unidade, invertido;

    printf("Digite um numero de três digitos: ");
    scanf("%d", &num);

    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;

    invertido = unidade * 100 + dezena * 10 + centena;
    printf("Número invertido: %d\n", invertido);

    return 0;
}
