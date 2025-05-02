#include <stdio.h>
#include <stdlib.h>

int main() {

    int X;
    double Y, consumo_medio;

    scanf("%i", &X);
    scanf("%lf", &Y);


    consumo_medio = fabs(X / Y);

    printf("%.3f km/l\n", consumo_medio);

    return 0;
}
