#include <stdio.h>
#include <errno.h>
#define LINE_LENGTH (1024)

int main(void){
    FILE* stream;
    char list[LINE_LENGTH];
    //read the file
    stream = fopen("hello.txt", "r");
    if(stream == NULL){
      perror("error while opening");
    }
    
    while(fgets(list,LINE_LENGTH,stream) != NULL){
      printf("%s", list);
    }
    
    if(fclose(stream) != 0 ){
      fprintf(stderr, "Erro while clsoing");
    }

    fflush(stream);

    return 0;
}