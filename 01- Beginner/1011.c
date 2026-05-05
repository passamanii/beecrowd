#include <stdio.h>

#define pi 3.14159


int main() {

    double r, vol;

    scanf("%lf", &r);

    vol = ((4/3.0) * pi * (r*r*r));

    printf("VOLUME = %.3f\n", vol);

    return 0;
}