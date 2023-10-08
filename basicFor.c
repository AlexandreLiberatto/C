#include <stdio.h>

int main() {

    int i, numero1, numero2;

    printf("Digite dois numeros: \n");
    scanf("%d%d", &numero1, &numero2);

    for (i = numero1; i <= numero2; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}