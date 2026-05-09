#include <stdio.h>


int main() {

    int employee_id, worked_hours;
    float per_hour, wage;

    scanf("%d", &employee_id);
    scanf("%d", &worked_hours);
    scanf("%f", &per_hour);

    wage = (per_hour * worked_hours);

    printf("NUMBER = %d\n", employee_id);
    printf("SALARY = U$ %.2f\n", wage);

    return 0;
}