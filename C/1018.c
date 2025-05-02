#include <stdio.h>

int main() {

    int n, cem, cinq, vint, dez, cinc, dois, um;

    scanf("%i", &n);

    printf("%i\n", n); 

    if (n > 0 && n < 1000000) {
        cem = n / 100;
        n = n % 100;
        cinq = n / 50;
        n = n % 50;
        vint = n / 20;
        n = n % 20;
        dez = n / 10;
        n = n % 10;
        cinc = n / 5;
        n = n % 5;
        dois = n / 2;
        n = n % 2;
        um = n / 1;

        printf("%i nota(s) de R$ 100,00\n", cem);
        printf("%i nota(s) de R$ 50,00\n", cinq);
        printf("%i nota(s) de R$ 20,00\n", vint);
        printf("%i nota(s) de R$ 10,00\n", dez);
        printf("%i nota(s) de R$ 5,00\n", cinc);
        printf("%i nota(s) de R$ 2,00\n", dois);
        printf("%i nota(s) de R$ 1,00\n", um);
    }

    return 0;
}
