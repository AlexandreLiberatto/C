#include <stdio.h>

#define Q '*'

void parede(int altura) 
{
    int i;

    for (i=0; i < altura; ++i)
    {
        printf("%c",Q);
    }
    printf("\n");
}

void casa (int altura_casa) 
{
    parede(altura_casa - 3);
    parede(altura_casa - 3);
    parede(altura_casa - 3);
    parede(altura_casa);
    parede(altura_casa);
    parede(altura_casa - 3);
    parede(altura_casa - 3);
    parede(altura_casa - 3);
    printf("\n");
}

int main ()
{
    int altura;

    printf("Qual altura voce deseja que a casa tenha?\n");
    scanf("%d", &altura);

    casa(altura);
    casa(altura);
    casa(altura);
    casa(altura);
    return 0;
}