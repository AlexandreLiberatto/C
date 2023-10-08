#include <stdio.h>

int main() {

    int x, i, resp = 0;

    int vezes[] = {0, 1, 2, 2, 3, 6, 5, 5, 9, 9};

    printf("Digite um numero para verificar quantas vezes aparece no array: \n");
    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (vezes[i] == x) {
           resp ++; 
        }
    }
    printf("O numero de vezes que %d aparece no array e: %d\n", x, resp);

    return 0;
}