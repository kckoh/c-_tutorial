#include <stdio.h>
# define LINE_LENGTH (8)

#define TRUE (1)
int main(void){
    //reading int
//     char line[LINE_LENGTH];
//     int num;
//     int sum = 0;
//    while (TRUE) {
//        if(fgets(line, LINE_LENGTH, stdin) == NULL){
//            clearerr(stdin);
//            break;
//        }
//        if(sscanf(line, "%d", &num) == 1){
//            sum += num;
//        }
//        printf("Line is: %s\nsum is: %d\n", line,sum);
//   }

    char line[LINE_LENGTH];
    char word[LINE_LENGTH];
    for(int i = 0; i < LINE_LENGTH; i++){
        printf("%c\n", line[i]);
    }
    while (TRUE) {
       if(fgets(line, LINE_LENGTH, stdin) == NULL){
           clearerr(stdin);
           break;
       }
       if(sscanf(line, "%s", word) == 1){
           for(int i = 0; i < LINE_LENGTH; i++){
             printf("%d\n", line[i]);
            }
           printf("Line is: %s\n", line);
       }
       
   }



    return 0;
}