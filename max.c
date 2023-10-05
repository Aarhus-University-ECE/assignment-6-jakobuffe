#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "max.h"
#include <assert.h>

int max(int* numbers, int size){
    int maxNum = numbers[0];
    for (int i = 0; i < size; i++)
    {
        if (numbers[i]>maxNum)
        {
            maxNum = numbers[i];
        }
    }
    //assert(maxNum>0);
    return maxNum;
}
/*
int main(void){
    srand(time(NULL));
    int size = rand()%40;

    int random_array[size];
    for (int i = 0; i < size; i++) {
        random_array[i] = rand(); // Generate a random integer and store it in the array
    }

    //int *y = &random_array;
    int maxNum = max(random_array, size);
    printf("%d", maxNum);

    return 0;
}
*/