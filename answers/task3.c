#include <stdio.h>
#include <stdlib.h>
#include "../helpers/getInput.h"

/* 
TASK:
    Given an array of integers, find the two numbers which sum to 2020.
    Return the product of those two numbers.
*/
int solve(int * input, int size)
{
    int i;
    int j;
    for (i = 0; i< size; i++) {
        for(j = 0; j < size; j++) {
            if (input[j] != input[i] && input[j] + input[i] == 2020) {
                return input[j]*input[i];
            }
        }
    }
    return 0;
}

int main(int argc, char ** argv)
{
    int arrSize = 200;
    int * destArr = malloc(sizeof(int) * arrSize);
    getInput("../task3_input.txt", destArr, &arrSize);
    printf("%d\n", solve(destArr, arrSize));
    free(destArr);
    return 0;
}
