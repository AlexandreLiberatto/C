#include <stdio.h>

int main() {
    float a, b, c, f1, f2, f3, f4, temp;

    printf("Digite um valor para a: ");
    scanf("%f", &a);

    printf("Digite um valor para b: ");
    scanf("%f", &b);

    printf("Digite um valor para c: ");
    scanf("%f", &c);

    f1 = (a * b) / c;
    printf("O resultado da primeira fórmula é: %.2f\n", f1);

    f2 = (a * a) + b + (c * 5);
    printf("O resultado da segunda fórmula é: %.2f\n", f2);

    f3 = (a * b * c) + b + ((c / 3) * 5) - 1;
    printf("O resultado da terceira fórmula é: %.2f\n", f3);

    temp = (a * b * c);

    f4 = (temp * temp * temp) / 2;
    printf("O resultado da quarta fórmula é: %.2f\n", f4);

    return 0;
}
