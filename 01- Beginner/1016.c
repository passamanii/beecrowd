#include <stdio.h>


int main() {

    int distance; //Desired Distance Between The Cars
    int time; //Time To Achieve The Desired Distance

    scanf("%d", &distance);

    time = 2 * distance;

    printf("%d minutos\n", time);

    return 0;
}