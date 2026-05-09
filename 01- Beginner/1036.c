#include <stdio.h>
#include <math.h>


int main() {

    double a, b, c;
    double delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (powl(b, 2) - (4 * a * c));
    x1 = ((-b + powl(delta, 1/2.0)) / (2 * a));
    x2 = ((-b - powl(delta, 1/2.0)) / (2 * a));

    if ((!a) || (delta < 0)) {
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }
    
    return 0;
}