#include <stdio.h>

#define consumption 12

int main() {
    
    int time, spd; 
    int distance;
    float liters;

    scanf("%d %d", &time, &spd);

    distance = (time * spd);
    liters = (distance * (1/(float) consumption));

    printf("%.3f\n", liters);

    return 0;
}