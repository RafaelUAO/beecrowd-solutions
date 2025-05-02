#include <stdio.h>

int main() {

    double a, b, c, media;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  if ((a >= 0.0 && a <= 10.0) && (b >= 0.0 && b <= 10.0) && (c >= 0.0 && c <= 10.0)) {
    media = (a * 2.0 + b * 3.0 + c * 5.0) / (10);

    printf("MEDIA = %.1f\n", media);
  }

    return 0;
}