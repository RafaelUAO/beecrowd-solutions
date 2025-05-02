#include <stdio.h>

int main() {

    double raio, volume, pi;
    pi = 3.14159;

    scanf("%lf", &raio);

    volume = (4.0/3) * pi * (raio * raio * raio);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}