#include <stdio.h>

void string_cat(char* dest, const char* src){
    size_t i;
    while(*dest){
        ++dest;
    }


    while(*src){
        *dest++ = *src++;
    }
    *dest = '\0';
}

//  dont know if the string ever contains '\0'
// assume that the string contains the '\0

int main(void){
    const char* str0 = "John";
    char str1[12] = "Hello, ";
    size_t i = 0;
    string_cat(str1, str0);


    while(i < sizeof(str1)){
        printf("the value of str1[%lu]: %d\n ",i, str1[i] );
        ++i;
    }



    return 0;
}