#include <stdio.h>

int dobro(int a, int b) {

    int resultado;

    if (a > b){
       resultado = a * 2;
    } else {
        resultado = b * 2;
    }
    return resultado;
}

int main() {

    int numero1, numero2, Reseul;

    printf("Digite dois valores e o maior sera devolvido em dobro. \n");
    scanf("%d%d", &numero1, &numero2);

    Reseul = dobro(numero1,numero2);

    printf("O dobro do maior numero e: %d\n", Reseul);

    return 0;
}