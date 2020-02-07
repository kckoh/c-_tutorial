#include <stdio.h>

size_t get_str_length(const char* str){
    const char* ptr = str;
    while(*ptr++ != '\0'){
    }
    return ptr - str -1; 
}

int main(void){

    const char str1[] = {'a','b','c'};
    const char str2[] = "abc"; //saves in the stack
    const char* str3 = "abc"; //stores in the data section 

    printf("str1: %c %c %c %d length: %lu\n",str1[0],str1[1], str1[2],str1[3], sizeof(str1));
    printf("str2: %c %c %c %d length: %lu\n",str1[0],str2[1], str2[2],str2[3],sizeof(str3));
    printf("str leng: %lu\n", get_str_length(str3));

    return 0;
}