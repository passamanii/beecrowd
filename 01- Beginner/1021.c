#include <stdio.h>


int main() {

    double cash; //Usando somente (float) a conta dá erro eventualmente, portanto, tem que ser (double).9
    int n100, n50, n20, n10, n5, n2;
    int n1, n050, n025, n010, n005, n001;

    int r100, r50, r20, r10, r5, r2;
    int r1, r050, r025, r010, r005; 

    scanf("%lf", &cash);

    n100 = cash / 100;
    r100 = (int)cash % 100;

    n50 = r100 / 50; 
    r50 = r100 % 50;

    n20 = r50 / 20;
    r20 = r50 % 20;

    n10 = r20 / 10;
    r10 = r20 % 10;

    n5 = r10 / 5;
    r5 = r10 % 5;

    n2 = r5 / 2;
    r2 = r5 % 2;

    n1 = r2;
    r1 = (cash - (int) cash) * 100;

    n050 = r1 / 50;
    r050 = r1 % 50;

    n025 = r050 / 25;
    r025 = r050 % 25;

    n010 = r025 / 10;
    r010 = r025 % 10;

    n005 = r010 / 5;
    r005 = r010 % 5;

    n001 = r005;

    printf(
        "NOTAS:\n"
        "%d nota(s) de R$ 100.00\n"
        "%d nota(s) de R$ 50.00\n"
        "%d nota(s) de R$ 20.00\n"
        "%d nota(s) de R$ 10.00\n"
        "%d nota(s) de R$ 5.00\n"
        "%d nota(s) de R$ 2.00\n"
        "MOEDAS:\n"
        "%d moeda(s) de R$ 1.00\n"
        "%d moeda(s) de R$ 0.50\n"
        "%d moeda(s) de R$ 0.25\n"
        "%d moeda(s) de R$ 0.10\n"
        "%d moeda(s) de R$ 0.05\n"
        "%d moeda(s) de R$ 0.01\n",
        n100, n50, n20, n10, n5, n2, n1, n050, n025, n010, n005, n001
    );

    return 0;
}