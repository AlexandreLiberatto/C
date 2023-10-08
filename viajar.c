#include <stdio.h>

int main() {
    float dinheiro, imposto, limiUltra;
    printf("Quanto dinheiro voce esta levando? \n");
    scanf("%f", &dinheiro);
    if (dinheiro <= 500) {
        printf("Voce nao paga imposto.\n");
    } else {
        limiUltra = dinheiro - 500;
        imposto = limiUltra / 2;
        printf("voce pagara %.1f\n", imposto);
    }
    return 0;
}