#include <stdio.h>

int mdc(int x, int y);

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", mdc(x, y));
    }
    
    return 0;
}
int mdc(int x, int y) {
    while (y != 0) {
        int temporaria = y;
        y = x % y;
        x = temporaria;
    }
    return x;
}