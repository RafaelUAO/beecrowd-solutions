#include <stdio.h>

int main() {

    int tempo, velocidade_media;
    double distancia, litros_necessarios;

    scanf("%i", &tempo);
    scanf("%i", &velocidade_media);

    distancia = velocidade_media * tempo;
    litros_necessarios = distancia / 12;

    printf("%.3f\n", litros_necessarios);

    return 0;
}
