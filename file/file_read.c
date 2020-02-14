#include <stdio.h>
#include <errno.h>
#define LINE_LENGTH (1024)

int main(void){
    FILE* stream;
    char list[LINE_LENGTH];
    //read
    stream = fopen("hello1.txt", "rb");
    if(stream == NULL){
      perror("error while opening");
    }
    
      if(fgets(list,LINE_LENGTH,stream) != NULL){
        printf("%s", list);
      }
    
    
    if(fclose(stream) != 0 ){
      fprintf(stderr, "Erro while clsoing");
    }
    fflush(stream);

    return 0;
}