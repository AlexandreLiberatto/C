#include <stdio.h>

int main () {

    int dinheiro, troco;

    printf("Quanto voce vai colocar na maquina? ");
    scanf("%d", &dinheiro);

    troco = dinheiro % 7;

    printf("Voce perdeu %d", troco);

    return 0;
}