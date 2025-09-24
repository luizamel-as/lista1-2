#include <stdio.h>
void printBinary(int n) {
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}
int main() {
    int i;
    printf("Decimal\tBinario\t\tOctal\tHexadecimal\n");

    for (i = 1; i <= 256; i++) {
        printf("%d\t\t", i);
        printBinary(i);
        printf("\t%o\t%X\n", i, i);
    }

    return 0;
}