#include <stdio.h>
// purpose: to make a function which compares two strings

//  function which return the difference of
int compare_string( const char* str0, const char* str1){
    while(*str0 != '\0' && *str1 == *str0){
        ++str0;
        ++str1;
    }

    return *str0 - *str1;

}

// main function
int main(void){
    const char* str0 = "abcdefghijkM";
    const char* str1 = "abcdefghijkm";
    int compare_str = compare_string(str0,str1);
    printf("the address of str0: %p\n ", str0 );
    printf("output is: %d\n", compare_str);
    printf("the address of str0: %p\n ", str0 );
}