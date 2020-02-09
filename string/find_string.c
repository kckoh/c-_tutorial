#include <stdio.h>
#include <string.h>

int compare(const char* str1,const char*str2){
    while(*str2){
        if(*str1 != *str2 ){
            return 0;
        }
        ++str2;
        ++str1;
    }
    return 1;
}

char* find_string(const char* src, const char* find){

    int total_len = 0;
    int len = strlen(find);


    while(*src){
        if(*src == *find){
            if(compare(src,find)){
                return (char*)src;
            }
        }
        ++src;
    }

    return NULL;
}

int main(void){
    
    char str1[] = "johjohjohn joha";
    char* str2 = "john";
    printf("address of str1 is: %p address of str2 is: %p\n", str1, str2);

    printf("address is: %p", find_string(str1,str2) );


    return 0;
}