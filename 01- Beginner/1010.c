#include <stdio.h>


int main() {

    int code1, quantity1; //Product 1 Info
    float price1; //Product 1 Info
    int code2, quantity2; //Product 2 Info
    float price2; //Product 2 Info
    float bill;

    scanf("%d %d %f", &code1, &quantity1, &price1);
    scanf("%d %d %f", &code2, &quantity2, &price2);

    bill = ((quantity1 * price1) + (quantity2 * price2));

    printf("VALOR A PAGAR: R$ %.2f\n", bill);

    return 0;
}