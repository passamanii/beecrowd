#include <stdio.h>


int main() {

    int input; //Total Age in days
    int y, m, d; //Person Age

    scanf("%d", &input);
    
    y = input / 365;
    m = (input % 365) / 30;
    d = (input % 365 % 30);

    printf(
        "%d ano(s)\n"
        "%d mes(es)\n"
        "%d dia(s)\n",
        y, m, d
    );

    return 0;
}