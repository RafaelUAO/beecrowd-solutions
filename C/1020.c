#include <stdio.h>

int main() {
    int diasTotais;

    scanf("%d", &diasTotais);

    int anos = diasTotais / 365;
    int diasRestantes = diasTotais % 365;
    int meses = diasRestantes / 30;
    int dias = diasRestantes % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
