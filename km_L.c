#include <stdio.h>

int main() {
    float media;

    float km;
    printf("Qual a km? ");
    scanf("%f", &km);

    float litros;
    printf("Quantos litros? ");
    scanf("%f", &litros);

    media = km / litros;

    printf("A media de km por litro do seu veiculo e: %.3f", media);

    return 0;

}