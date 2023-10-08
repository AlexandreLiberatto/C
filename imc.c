#include <stdio.h>

int main() {

    float altura, massa, imc;
    printf("Digite sua altura e peso respectivamente: \n");
    scanf("%f%f", &altura, &massa);

    imc = massa / (altura * altura);
     printf("Seu IMC e: %.1f\n", imc);

     return 0;
}