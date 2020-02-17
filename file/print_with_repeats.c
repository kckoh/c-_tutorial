#include <stdio.h> 
#include "file.h"
#define LENGTH (50)
//input: abc:def:ghi output: abcdefdefghi
void print_with_repeats(const char* file_name){
    // prepare to read a file
    FILE* stream;
    int c = 0;
    int go_back = 0;
    int count = 0;
    stream = fopen(file_name, "r");

    //check error
    if(stream == NULL){
        perror("File opening failed");
        return;
    }

    //loop through file and go back if :
    while ((c = fgetc(stream)) != EOF) { 
            if(c == 58 ){
                go_back++;
                if(go_back%2 == 0){
                    count--;
                    fseek(stream, count *sizeof(char),SEEK_CUR);
                    count = 0;
                    go_back = 0;
                }
            }
            else if(go_back>0){
                printf("%c",c);
                count--;
            }
            else{
                printf("%c",c);
            }
        }

    // error checking while closing file
     if(fclose(stream) == EOF ){
            perror("error while closing file");
        }
}


