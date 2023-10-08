#include <stdio.h>

int main() 
{

    int n, divisor, achou;
    printf("Digite um numero para verificar se e primo\n");
    scanf("%d", &n);
    divisor = 2;
    achou = 0;  // falso

    while(divisor < n && !achou)
    {
        if (n % divisor == 0)
        {
            printf("O primeiro divisor de %d e %d\n", n, divisor);
            achou = 1;
            break;
        }
        else
        {
            divisor++;
        }
    }
    if (achou)
    {
        printf("O numero %d nao e primo!\n", n);
    }
    else 
    {
         printf("O numero %d e primo!\n", n);
    }
    return 0;
}