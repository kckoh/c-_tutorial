
#include <stdio.h> 

// swap two numbers functions are stored in stack memory; to swap you need to pass pointers to int
void swap( int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}



int main(void){
    int num1 = 7;
    int num2 = 5;

    swap(&num1,&num2);

    printf("num1 is: %d  num2 is: %d \n ", num1, num2);
    return 0;
}