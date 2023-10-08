#include <stdio.h>

int main() {
    
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; ++i) {
        if (vet[i] % 2 == 0) {
            vet[i] = 1;
        } else {
            vet[i] = -1;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vet[i]);
    }
    return 0;
}