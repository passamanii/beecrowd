#include <stdio.h>


int main() {
    
    int input; //Time in Seconds
    int h, m, s;

    scanf("%d", &input);

    h = (input / 3600);
    m = (input % 3600) / 60;
    s = (input % 3600 % 60);

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}