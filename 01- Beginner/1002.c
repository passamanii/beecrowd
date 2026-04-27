#include <stdio.h>
#include <math.h>

#define pi 3.14159


int main() {

    double R, A;

    scanf("%lf", &R);

    A = (pi*pow(R, 2));

    printf("A=%.4f\n", A);

    return 0;
}