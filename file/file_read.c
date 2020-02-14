#include <stdio.h>
#define LINE_LENGTH (1024)
int main(void){
    FILE* stream;
    char list[LINE_LENGTH];
    //read
    stream = fopen("hello.txt", "r");
    while( fgets(list, LINE_LENGTH , stream)  ){
        printf("%s", list);
    }



    return 0;
}