#include <stdio.h>

int main () {

    int num, contador;

    printf("Digite um numero:");
    scanf("%d", &contador);

    printf("Digite outro numero numero:\n");
    scanf("%d", &num);

    while (contador <= num) {
        printf("%d\n",contador);
        contador += 1;
    }
    return 0;
}