#include <stdio.h>

int main() {

    float numero1, numero2, adicao, subtracao, divisao, multiplicacao;

    printf("Digite o primeiro numero: \n\n");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: \n\n");
    scanf("%f", &numero2);

    subtracao = numero1 - numero2;
    printf("O resultado da subtracao entre %.1f e %.1f e: %.1f\n\n", numero1, numero2, subtracao);

    adicao = numero1 + numero2;
    printf("A som entre %.1f e %.1f e: %.1f\n\n", numero1, numero2, adicao);

    divisao = numero1 / numero2;
    printf("A divisao entre %.1f e %.1f e: %.1f\n\n", numero1, numero2, divisao);

    multiplicacao = numero1 * numero2;
    printf("A multiplicacao entre %.1f e %.1f e: %.1f\n\n", numero1, numero2, multiplicacao);

    return 0;
}