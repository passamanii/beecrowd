#include <stdio.h>

int main() {

    int h1, m1; 
    int h2, m2;
    int hf, mf;
    int total_min;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    total_min = (((h2 * 60) + (m2)) - ((h1 * 60) + (m1)));

    if (!total_min) total_min = 24 * 60;
    else if (total_min < 0) total_min = (24 * 60) + total_min;
    
    hf = total_min / 60;
    mf = (total_min % 60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf); 

    return 0;
}