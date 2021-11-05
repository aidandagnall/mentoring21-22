#include "../helpers/array.h"

#define ARRAY_SIZE 5

void multArrayBy(int n, int *from, int *dest) {
    int i;
    for (i = 0; i < ARRAY_SIZE; i++)
        dest[i] = from[i] * n;
}

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int newArr[5];
    int factor = 3;

    multArrayBy(factor, arr, newArr);
    
    compareAnswer(arr, newArr, (sizeof(arr) / sizeof(int)), (sizeof(newArr) / sizeof(int)), factor);
}
