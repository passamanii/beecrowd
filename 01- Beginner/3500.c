#include <stdio.h>


int main() {

    int x, x_inv;

    scanf("%d", &x);
    
    x_inv = ((x % 100 % 10) * 100) + (((x % 100) / 10) * 10) + (x / 100);

    printf("Invertido = %d\n", x_inv);

    return 0;
}