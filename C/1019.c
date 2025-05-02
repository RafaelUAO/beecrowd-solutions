#include <stdio.h>

int main() {

    int n, horas, min, seg;

    scanf("%i", &n);

    horas = n / 3600;
    n = n % 3600;
    min = n / 60;
    n = n % 60;
    seg = n;

    printf("%i:%i:%i\n", horas, min, seg);

    return 0;
}