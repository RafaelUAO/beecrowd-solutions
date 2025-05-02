#include <stdio.h>

void simplificar(int *num, int *den);
void tipos_operacoes(int n1, int n2, int d1, int d2, char a);
int mdc(int a, int b);

int main() {
    int n1, n2, d1, d2, N;
    char a;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d / %d %c %d / %d", &n1, &d1, &a, &n2, &d2);
        tipos_operacoes(n1, n2, d1, d2, a);
    }

    return 0;
}

void tipos_operacoes(int n1, int n2, int d1, int d2, char a) {
    int num, den;

    if (a == '+') {
        num = n1 * d2 + n2 * d1;
        den = d1 * d2;
    } 
    else if (a == '-') {
        num = n1 * d2 - n2 * d1;
        den = d1 * d2;
    } 
    else if (a == '*') {
        num = n1 * n2;
        den = d1 * d2;
    } 
    else if (a == '/') {
        num = n1 * d2;
        den = n2 * d1;
    }   

    int num_simplificado = num;
    int den_simplificado = den;

    simplificar(&num_simplificado, &den_simplificado);

    printf("%d/%d = %d/%d\n", num, den, num_simplificado, den_simplificado);
}

int mdc(int a, int b) {
    if (a < 0) a = -a;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplificar(int *num, int *den) {
    int divisor = mdc(*num, *den);
    *num /= divisor;
    *den /= divisor;
}
