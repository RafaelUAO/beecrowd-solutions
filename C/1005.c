#include <stdio.h>

int main() {

    double a, b, media;

  scanf("%lf", &a);
  scanf("%lf", &b);
  
  if ((a >= 0.0 && a <= 10.0) && (b >= 0.0 && b <= 10.0)) {
    media = (a * 3.5 + b * 7.5) / (11);

    printf("MEDIA = %.5f\n", media);
  }

    return 0;
}