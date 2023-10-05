#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int max(int* numbers, int size){
    int maxNum = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i]>maxNum)
        {
            maxNum = numbers[i];
        }
    }
    return maxNum;
}

int main(void){
    srand(time(NULL));
    int size = rand()%40;

    int random_array[size];
    for (int i = 0; i < size; i++) {
        random_array[i] = rand(); // Generate a random integer and store it in the array
    }

    int *y = &random_array;
    int maxNum = max(y, size);
    printf("%d", maxNum);

    return 0;
}