#include <stdio.h>
// purpose: copy a string 

//  1. iterate each and copy
void copy_string(char* dest, const char* src){


    while(*src != '\0'){
        *dest++ = *src++; 
    }

    *dest = '\n';

}

// main function
int main(void){

    const char* str0 = "abc";
    char str1[4];
    copy_string(str1, str0);
    printf("the address of str0: %s\n ", str1 );

}