#include <stdio.h>
#include "overlap.h"

int main(void){
    const int arr1[7] = {1,2,3,4,5,6,7}; 
    const int arr2[] = {4,5,6,7,8};
    const size_t leng1 = ARRAY_LENGTH(arr1);
    const size_t leng2 = ARRAY_LENGTH(arr2);
    const int is_overlap = overlap(arr1, arr2, leng1 , leng2);

    if(is_overlap == TRUE){
        printf("it is overlapped\n");
    }
    else {
        printf("it does not overlap\n");
    }


    return 0;
}