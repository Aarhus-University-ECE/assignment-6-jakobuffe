#include <stdio.h>

#pragma once

typedef struct{
    int * buffer;
    size_t capacity;
    size_t size;
} array_of_int;