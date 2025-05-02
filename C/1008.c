#include <stdio.h>

int main() {

   int numero;
   double salario, horas, calculo;

   scanf("%i", &numero);
   scanf("%lf", & salario);
   scanf("%lf", &horas);

   calculo = salario * horas;

   printf("NUMBER = %i\nSALARY = U$ %.2f\n", numero, calculo);

    return 0;
}