
#include <stdio.h> 

// assume the input is linear array
void min_max(const int array[], size_t length, int* min_out, int* max_out){
    size_t temp;
    *min_out = array[0];
    *max_out = array[0];
    for(temp = 0;temp < length;++temp){
       if(array[temp] < *min_out){
           *min_out = array[temp];
       }
        if(array[temp] > *max_out){
            *max_out = array[temp];
        } 

    } 
}



int main(void){
    int min = 0;
    int max = 0;
    const int array [] = {1,2,3,4,8,2,8};
    size_t len = sizeof(array)/sizeof(array[0]);

    min_max(array,len,&min,&max);
    printf("min is: %d  max is: %d \n ", min, max);
    return 0;
}