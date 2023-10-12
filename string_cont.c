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
        if (frase[i] != '\n')
        {
            ++contador;
        }
        i++;
    }
    printf("%d\n", contador);
    return 0;
}