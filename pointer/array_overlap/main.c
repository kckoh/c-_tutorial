#include <cstddef>
#include <stdio.h>
#include "overlap.h"

int main(void){
    const int arr1[7] = {1,2,3,4,5,6,7}; 
    const int* arr2 = &arr1[4];
    const size_t = ARRAY_LENGTH(arr1)
    const int is_overlap = overlap(const int *array1, const int *array2, const int length1, const int length2);

    if(is_overlap == TRUE){
        printf("it is overlapped");
    }
    else {
        printf("it does not overlap");
    }


    return 0;
}