#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Ponto;

void ler_pontos(Ponto pontos[], int n);
int tentar_onda_com_a(Ponto pontos[], int n, int a);
int cmp(const void *a, const void *b);


int main() {
    int n;
    Ponto pontos[1000];

    while (scanf("%d", &n) != EOF) {
        ler_pontos(pontos, n);

        qsort(pontos, n, sizeof(Ponto), cmp);

        int melhor = 0;

        for (int i = 0; i < n; i++) {
            int a = pontos[i].y - 1;
            int resultado = tentar_onda_com_a(pontos, n, a);
            if (resultado > melhor) {
                melhor = resultado;
            }
        }

        printf("%d\n", melhor);
    }

    return 0;
}

void ler_pontos(Ponto pontos[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pontos[i].x, &pontos[i].y);
    }
}

int tentar_onda_com_a(Ponto pontos[], int n, int a) {
    int maior_numero_na_sequencia = 0;

    for (int tentativa = 0; tentativa < 2; tentativa++) {
        int esperado = tentativa == 0 ? a + 1 : a - 1;
        int ultimo_x = -32769; 
        int conta = 0;

        for (int i = 0; i < n; i++) {
            if (pontos[i].y == esperado && pontos[i].x > ultimo_x) {
                conta++;
                ultimo_x = pontos[i].x;
                esperado = (esperado == a + 1) ? a - 1 : a + 1;
            }
        }

        if (conta > maior_numero_na_sequencia)
            maior_numero_na_sequencia = conta;
    }

    return maior_numero_na_sequencia;
}

int cmp(const void *a, const void *b) {
    return ((Ponto *)a)->x - ((Ponto *)b)->x;
}
