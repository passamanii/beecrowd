#include <stdio.h>


int main() {

    int dist; //Distance Traveled
    float fuel; //Total fuel consumed
    float km_l; //Average Consumption

    scanf("%d %f", &dist, &fuel);

    km_l = (dist / fuel);

    printf("%.3f km/l\n", km_l);

    return 0;
}