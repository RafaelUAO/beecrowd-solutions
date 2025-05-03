#include <stdio.h>
#include <string.h>

void deslocar_posicao(char *texto);
void inverter_string(char *texto);
void deslocar_metade(char *texto);

int main() {
    int N;

    scanf("%d", &N);
    getchar();

    if (N >= 1 && N <= 10000) {

        for (int i = 0; i < N; i++) {

            char texto[1000];

            scanf(" %[^\n]", texto);

            deslocar_posicao(texto);
            inverter_string(texto);
            deslocar_metade(texto);
            
            printf("%s\n", texto);
        }

    }



    return 0;
}

void deslocar_posicao(char *texto) {

    for (int i = 0; texto[i] != '\0'; i++) {

        if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) {
            texto[i] += 3;
        }
    }
}

void inverter_string(char *texto) {

    int tamanho = strlen(texto);

    for (int i = 0; i < tamanho / 2; i++) {

        char temporaria = texto[i];
        texto[i] = texto[tamanho - 1 - i];
        texto[tamanho - 1 - i] = temporaria;
    }
}

void deslocar_metade(char *texto) {

    int tamanho = strlen(texto);
    int metade = tamanho / 2;

    for (int i = metade; i < tamanho; i++) {
        texto[i] -= 1;
    }
}
