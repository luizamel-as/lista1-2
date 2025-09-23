#include <stdio.h>

int main() {
    int voto, paulo = 0, renata = 0, branco = 0, nulo = 0, total = 0;
    char c;

    do {
        printf("Vote (5-Paulo, 7-Renata, 0-Branco, negativo para sair): ");
        scanf("%d", &voto);
        if (voto < 0) break;

        printf("Confirma %d? (s/n): ", voto);
        scanf(" %c", &c);

        if (c=='s' || c=='S') {
            total++;
            switch(voto) {
                case 5: paulo++; break;
                case 7: renata++; break;
                case 0: branco++; break;
                default: nulo++;
            }
        }
    } while(1);

    printf("Paulo: %.2f%%\n", total? paulo*100.0/total : 0);
    printf("Renata: %.2f%%\n", total? renata*100.0/total : 0);
    printf("Branco: %.2f%%\n", total? branco*100.0/total : 0);
    printf("Nulo: %.2f%%\n", total? nulo*100.0/total : 0);

    printf("Eleito: %s\n", (paulo>renata)? "Paulo" : (renata>paulo)? "Renata" : "Empate");

    return 0;
}



