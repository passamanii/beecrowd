#include <stdio.h>


int main() {

    int cash; //Total Cash Desired
    int n100, n50, n20, n10, n5, n2, n1; //Amount Of Bank Notes
    int r100, r50, r20, r10, r5, r2; //Remainder Of Bank Notes
    
    n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0; 

    scanf("%d", &cash);

    n100 = cash / 100;
    r100 = cash % 100;

    n50 = (r100) / 50;
    r50 = r100 % 50;

    n20 = (r50) / 20;
    r20 = r50 % 20;

    n10 = (r20) / 10;
    r10 = r20 % 10;

    n5 = (r10) / 5;
    r5 = r10 % 5;

    n2 = (r5) / 2;
    r2 = r5 % 2;

    n1 = r2;

    printf("%d\n", cash);

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);    
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}