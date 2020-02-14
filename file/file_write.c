#include <stdio.h>
#define LINE_LENGTH (1024)
int main(void){
    FILE* stream;
    int list[LINE_LENGTH] = {1,2,3,4,5};
    //read
    stream = fopen("hello.txt", "wb");
    fwrite(list, sizeof(list[0]), LINE_LENGTH, stream);

    return 0;
}