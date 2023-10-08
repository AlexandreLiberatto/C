#include <stdio.h>

int main() {
    double valor1, valor2, valor3;
    double media;

    // Solicitar que o usuário digite três valores diferentes
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%lf", &valor3);

    // Calcular a média dos três valores
    media = (valor1 + valor2 + valor3) / 3.0;

    // Mostrar a média na tela
    printf("A média dos três valores é: %.2lf\n", media);

    return 0;
}
