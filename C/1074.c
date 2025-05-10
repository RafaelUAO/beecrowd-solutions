#include <stdio.h>

void mostra_mensagem(int x);

int main() {
    int n, valor, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &valor);
        mostra_mensagem(valor);
    }

    return 0;
}

void mostra_mensagem(int x) {
    if (x == 0) {
        printf("NULL\n");
    } 
    else if (x > 0 && x % 2 == 0) {
        printf("EVEN POSITIVE\n");
    } 
    else if (x > 0 && x % 2 != 0) {
        printf("ODD POSITIVE\n");
    } 
    else if (x < 0 && x % 2 == 0) {
        printf("EVEN NEGATIVE\n");
    } 
    else if (x < 0 && x % 2 != 0) {
        printf("ODD NEGATIVE\n");
    }
}
