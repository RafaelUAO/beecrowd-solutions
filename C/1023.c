#include <stdio.h>
#include <math.h>

int main() {

    int N, caso = 1;

    while (scanf("%d", &N), N != 0) {

        int consumo[201] = {0}; 
        int total_pessoas = 0, total_consumo = 0;

        for (int i = 0; i < N; i++) {

            int moradores, consumo_total;

            scanf("%d %d", &moradores, &consumo_total);

            int media = consumo_total / moradores;

            consumo[media] += moradores;

            total_pessoas += moradores;
            total_consumo += consumo_total;
        }

        if (caso > 1) printf("\n");

        printf("Cidade# %d:\n", caso++);

        int espacamento = 1;

        for (int i = 0; i < 201; i++) {

            if (consumo[i] > 0) {

                if (!espacamento) printf(" ");

                printf("%d-%d", consumo[i], i);

                espacamento = 0;
            }
        }

        double media_total = (double)total_consumo / total_pessoas;

        media_total = floor(media_total * 100) / 100.0;

        printf("\nConsumo medio: %.2lf m3.\n", media_total);
    }

    return 0;
}
