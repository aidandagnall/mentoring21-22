#include <stdio.h>

void func1(int *n) {
    *n = 10;
}

int func2(int *x, int *y) {
    *x += *y;
    return (*x)++;
}

int main() {
    int i, j, k = 20;

    /* A */
    printf("A: i = %d, j = %d, k = %d\n", i, j, k);

    j = ++k;
    i = j++;

    /* B */
    printf("B: i = %d, j = %d, k = %d\n", i, j, k);

    func1(&j);

    /* C */
    printf("C: i = %d, j = %d, k = %d\n", i, j, k);

    k = func2(&i, &j);

    /* D */
    printf("D: i = %d, j = %d, k = %d\n", i, j, k);
}
