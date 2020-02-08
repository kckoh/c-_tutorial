#include <stdio.h>

int str_insensitive( const char* str0, const char* str1){

     while(*str0 != '\0' && *str1 == *str0){
        ++str0;
        ++str1;
    }

    return *str0 - *str1;

}

int main(void){
    const char* str0 = "abcdefg";
    const char* str1 = "abcdefg";
    int compare_str = str_insensitive(str0,str1);
    printf("output is: %d\n", compare_str);
}