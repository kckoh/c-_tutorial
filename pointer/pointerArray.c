#include <stdio.h>

void passArray(const int twod [10][10]){
    
}

int main(void){
    
    int* arr1[10];
    int arr2[10][10];
    size_t i;
    size_t j;
    size_t maxNum = 10;
    for(i = 0;i < maxNum; ++i){
        for (j = 0;j < maxNum; ++j){
            arr2[i][j] = i*j;
        }
    }

    printf("arr2[2][2] is: %d", arr2[2][2]);


}