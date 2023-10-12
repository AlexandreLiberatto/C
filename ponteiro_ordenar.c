#include <stdio.h>

int main()
{
    int x, y, z;
    int *px, *py, *pz;

    printf("digite tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x < y && x < z){
        px = &x;
    } else if (y < x || y < z){
        px = &y;
    } else {
        px = &z;
    }

    if ((y > z && y < x) || (y > x && y < z)) {
        py = &y;
    } else if ((x > z && x < y) || (x > y && x < z)) {
        py = &x;
    } else {
        py = &z;
    }

    if(z > x && z > y) {
        pz = &z;
    } else if (x > z && x > y) {
        pz = &x;
    } else {
        pz = &y;
    }

    printf("%d %d %d\n", *px, *py, *pz);
    return 0;

}