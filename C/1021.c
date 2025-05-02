#include <stdio.h>

int main() {
    double N;
    int notas, moedas;
    
    scanf("%lf", &N);

    int centavos = (int)(N * 100 + 0.5);  

    int valoresNotas[] = {10000, 5000, 2000, 1000, 500, 200};
    int valoresMoedas[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        notas = centavos / valoresNotas[i];
        printf("%d nota(s) de R$ %.2f\n", notas, valoresNotas[i] / 100.0);
        centavos %= valoresNotas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        moedas = centavos / valoresMoedas[i];
        printf("%d moeda(s) de R$ %.2f\n", moedas, valoresMoedas[i] / 100.0);
        centavos %= valoresMoedas[i];
    }

    return 0;
}