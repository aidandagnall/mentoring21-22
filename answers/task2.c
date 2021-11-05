#include <stdio.h>
#include <stdlib.h>

void fib(int n) {
    int x = 0, y = 1;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", x);
        y += x;
        x = y - x;
    }
    print("\n");
}

void lucas(int n, int a, int b) {
    int x = a, y = b;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", x);
        y += x;
        x = y - x;
    }
}

int main (int argc, char ** argv) {

    if (argc != 2)
        printf("Incorrect number of arguments supplied.");
    print_fib(atoi(argv[1]));

    return 0;
}

