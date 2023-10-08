#include <stdio.h>

int main() {

    float x, y, z;
    float media;

    printf("Digite um valor para x: \n");
    scanf("%f", &x);

    printf("Digite um valor para y: \n");
    scanf("%f", &y);

    printf("Digite um valor para z: \n");
    scanf("%f", &z);

    media = (x + y + z) / 3;

    printf("A media dos valores %.1f, %.1f, %.1f e: %.1f", x, y, z, media);

    return 0;
}