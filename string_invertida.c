#include <stdio.h>
#include <string.h>
#define max 500

int main()
{
    int i = 0;
    int tamanho = 0;
    char palavra_invertida[max+1];
    char palavra[max+1];

    printf("digite uam palavra: ");
    fgets(palavra,max+1,stdin);

    tamanho = strlen(palavra);

    for (i = tamanho - 1; i >= 0; i--) {
        palavra_invertida[tamanho - 1 - i] = palavra[i];
    }
    
    palavra_invertida[tamanho] = '\0';

    printf("A palavra invertida e: %s\n", palavra_invertida);
    return 0;
    
}