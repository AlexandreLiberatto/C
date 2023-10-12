#include <stdio.h>
#define MAX 500

int main () 
{
    char frase[MAX+1];

     int i=0, contador = 0;

    printf("Digite uma frase: ");
    fgets(frase,MAX+1,stdin);

    while (frase[i] != '\0')
    {
        frase[i] = tolower(frase[i]);
        ++i;
    }
    i = 0;

    while (frase[i] != '\0')
    {
        if (frase[i] != '\n' && frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            ++contador;
        }
        i++;
    }
    printf("%d\n", contador);
    return 0;
}