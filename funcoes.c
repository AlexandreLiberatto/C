#include <stdio.h>

int pares(int vet[], int tam) {

    int res;

    for (int i = 0; i < tam; ++i) {
        if (vet[i] % 2 == 0) {
            res = vet[i];
        }
    }
    return res;
}

int contar_vogais(char str[], int tam) {
    int contador = 0;
    for (int i = 0; i < tam; i++){
        char c = str[i];
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'b' || c == 'c' || c == 'd') {
            contador ++;
        }
    }
    return contador;
}