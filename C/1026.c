#include <stdio.h>


int main() {
    
    unsigned int x, y;

    while (scanf("%u %u", &x, &y) != EOF) {
        unsigned int soma = x ^ y;
        printf("%u\n", soma);
    }

    return 0;
}