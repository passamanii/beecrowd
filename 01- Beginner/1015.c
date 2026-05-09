#include <stdio.h>
#include <math.h>


int main() {

    double x1, y1; //First Point Coordenates
    double x2, y2; //Second Point Coordenates
    double distance; //Distance Between Two Points

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distance = powl(powl(x2 - x1, 2) + powl(y2 - y1, 2), 1/2.0);

    printf("%.4f\n", distance);

    return 0;
}