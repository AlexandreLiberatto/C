#include <stdio.h>

int main() {

    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int resp = 0;

    for (int i = 9; i >= 0; i--) {
        if (vet[i] % 2 == 0) {
            printf("%d, ", vet[i]); 
        }
    }
   
    return 0;
}