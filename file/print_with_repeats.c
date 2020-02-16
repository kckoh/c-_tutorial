#include <stdio.h> 
#include "file.h"
// general structure: get a character check if is equal to : save this point
void print_with_repeats(const char* file_name){
    FILE* file_open;
    int c;
    int go_back;
    int count;
    size_t size = sizeof(int);
    file_open = fopen(file_name, "r");

    if(file_open == NULL){
        perror("src File opening failed");
        return;
    }

    while ((c = fgetc(file_open)) != EOF) { 
        // standard C I/O file reading loop
        if(c == 58 ){
            if(go_back%2 == 0){
                fseek(file_open, count *size,SEEK_CUR);
                count = 0;
        
            }
            go_back++;
        }
        else{
            printf("%c",c);
        }


    }
     if(fclose(file_open) == EOF ){
            perror("error while closing file");
        }
}