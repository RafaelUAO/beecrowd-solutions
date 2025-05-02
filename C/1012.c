#include <stdio.h>

int main() {

    double a, b, c, pi, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    area_triangulo = (a * c) / 2.0;
    area_circulo = (c * c) * pi;
    area_trapezio = (a + b) * c / 2.0;
    area_quadrado = b * b;
    area_retangulo = a * b;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo);

    return 0;
}
