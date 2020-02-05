#include <stdio.h>

int main(void){
    int num1 = 12345678;
    int* ptr = &num1;
    printf(" the address of ptr is: %p \n the address after one byte is: %p \n", ptr, (char*)ptr +1 );
}