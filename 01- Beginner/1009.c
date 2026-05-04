#include <stdio.h>


int main() {

    char name[100];
    double base_wage, total_selling, salary;

    fgets(name, 100, stdin);
    scanf("%lf", &base_wage);
    scanf("%lf", &total_selling);
    
    salary = (base_wage + (total_selling * 0.15));

    printf("TOTAL = R$ %.2f\n", salary);

    return 0;
}