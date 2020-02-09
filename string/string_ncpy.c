#include <stdio.h>
// purpose: copy a string 

//  1. iterate each and copy
void copy_string(char* dest, const char* src, size_t count){

    size_t len_dest = sizeof(dest);
    size_t i = 0;

    while(*src && --count){
        *dest++ = *src++;
    }
    *dest = '\0';
    

}
   


// main function
int main(void){

    const char* str0 = "abc";
    char str1[3];
    size_t count = 16;
    size_t i = 0;
    while(i < sizeof(str1)){
        printf("before:the value of str1[%lu]: %d\n ",i, str1[i] );
        ++i;
    }
    i = 0;
    copy_string(str1, str0,count);
    while(i < sizeof(str1)){
        printf("the value of str1[%lu]: %d\n ",i, str1[i] );
        ++i;
    }

}