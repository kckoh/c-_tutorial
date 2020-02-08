#include <stdio.h>

int to_lower(const int str){
    if(str>90){
        return str -32;
    }
    return str;

}

int str_insensitive(const char* str0, const char* str1){
    int c0 = to_lower(*str0);
    int c1 = to_lower(*str1);
     while(c0 != '\0' && c0 == c1){
         str0++;
         c0 = to_lower(*str0);
         c1 = to_lower(*str1);
    }

    if(c1==c0){
        return 0;
    }

    return c0>c1? 1:-1;

}

int main(void){
    const char* str0 = "abcdefg"; //stored in read only memory
    const char* str1 = "abcdefg";

    int compare_str = str_insensitive(str0,str1);
    printf("output is: %d\n", compare_str);
}