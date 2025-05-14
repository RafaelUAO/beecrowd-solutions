#include <stdio.h>

int contador;

int fib(int x);

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);

        contador = 0; 
        int resultado = fib(x);
        printf("fib(%d) = %d calls = %d\n", x, contador - 1, resultado);
    }

    return 0;
}

int fib(int x) {
    contador++; 
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fib(x - 1) + fib(x - 2);
}