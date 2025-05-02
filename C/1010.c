#include <stdio.h>

int main() {

    double cd_pc1, cd_pc2, quantidade_pc1, quantidade_pc2, valor_pc1, valor_pc2, total;

    scanf("%lf %lf %lf", &cd_pc1, &quantidade_pc1, &valor_pc1);
    scanf("%lf %lf %lf", &cd_pc2, &quantidade_pc2, &valor_pc2);

    total = (quantidade_pc1 * valor_pc1) + (quantidade_pc2 * valor_pc2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);


    return 0;
}