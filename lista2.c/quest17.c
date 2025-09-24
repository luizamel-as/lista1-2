#include <stdio.h>
int main() {
    int celsius;
    double fahrenheit;

    printf("Conversao de Celsius para Fahrenheit (de 10 em 10):\n");
    for (celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d °C = %.1f °F\n", celsius, fahrenheit);
    }

    return 0;
}
