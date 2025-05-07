#include <stdio.h>
#include <stdlib.h>

int comparar(const void *x, const void *y) {
    return (*(int*)x - *(int*)y);
}

int main() {
    int N, Q, caso = 1;

    while (scanf("%d %d", &N, &Q), N != 0 && Q != 0) {
        int marble[N];

        
        for (int i = 0; i < N; i++) {
            scanf("%d", &marble[i]);
        }

      
        qsort(marble, N, sizeof(int), comparar);

        printf("CASE# %d:\n", caso++);

        for (int i = 0; i < Q; i++) {
            int consultar;
            scanf("%d", &consultar);

            int posicao = -1;
            for (int j = 0; j < N; j++) {
                if (marble[j] == consultar) {
                    posicao = j + 1;  
                    break;
                }
            }

            if (posicao == -1)
                printf("%d not found\n", consultar);
            else
                printf("%d found at %d\n", consultar, posicao);
        }
    }

    return 0;
}
