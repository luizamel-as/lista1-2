#include <stdio.h>
int main(){
    int jose = 150;
    int pedro = 110;
    int anos = 0;
    do {
        jose += 2;
        pedro += 3;
        anos++;
    } while (pedro <= jose);
    printf("Em %d anos Pedro será maior que José.\n", anos);
    return 0;
}