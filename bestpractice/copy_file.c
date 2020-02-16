#include "file_functions.h"
#include <stdio.h>

void copy_file(const char* src, const char* dest){
    FILE* src_open;
    FILE* dest_open;
    int c;

    src_open = fopen(src, "r");
    if(src_open == NULL){
        perror("src File opening failed");
        return;
    }

    dest_open = fopen(dest, "w");
    if(dest_open == NULL){
        perror("File opening failed");
        goto closure;
    }

     while ((c = fgetc(src_open)) != EOF) { // standard C I/O file reading loop
       fputc(c,dest_open);
    }

    if(fclose(dest_open) == EOF ){
            perror("error while closing dest file");
        }

    closure:
        if(fclose(src_open) == EOF ){
            perror("error while closing src file");
        }

}