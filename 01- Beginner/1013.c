#include <stdio.h>
#include <stdlib.h>


int qual_eh_maior(int a, int b, int c) {

    int m = (((a + b) + (abs(a - b))) / 2);
    m = (((m + c) + (abs(m - c))) / 2);

    return m;
}

int main() {

    int A, B, C, maior;

    scanf("%d %d %d", &A, &B, &C);

    maior = qual_eh_maior(A, B, C);
    printf("%d eh o maior\n", maior);

    return 0;
}