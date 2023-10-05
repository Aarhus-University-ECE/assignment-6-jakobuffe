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
    int x = rand();
    int* y;

    int random_array[x];
    for (int i = 0; i < x; i++) {
        random_array[i] = rand(); // Generate a random integer and store it in the array
    }

    // y = &random_array;
    int maxNum = max(random_array,x);
    printf("%d", maxNum);

    return 0;
}