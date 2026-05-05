#include <stdio.h>

#define pi 3.14159


int main() {

    double A, B, C; //Variables
    double triangle, circle, trapezius, square, rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = ((A * C) / 2.0);
    circle = (pi * (C * C));
    trapezius = (((A + B) / 2.0) * C);
    square = (B * B);
    rectangle = (A * B);

    printf("TRIANGULO: %.3f\n", triangle);
    printf("CIRCULO: %.3f\n", circle);
    printf("TRAPEZIO: %.3f\n", trapezius);
    printf("QUADRADO: %.3f\n", square);
    printf("RETANGULO: %.3f\n", rectangle);

    return 0;
}