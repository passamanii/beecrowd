#include <stdio.h>


int main() {

    double f1, f2;
    double fr;

    scanf("%lf %lf", &f1, &f2);

    fr = ((1 + f1/100) * (1 + f2/100) - 1) * 100; //(1 + fx/100) me dá o crescimento percentual de cada flutuação. A multiplicação dos dois me dá a flutuação resultante. Logo após eu subtraio 1 para alcançar a flutuação pura, e multiplico por 100 para mostrá-la mais claramente em porcentagem.

    printf("%.6f\n", fr);

    return 0;
}