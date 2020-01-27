#include <stdio.h>

int main() {
   /* if argument is 0 it is considered false
   switch argument only takes int, char and enum
    */
    int h = 0;
    if(h){
         printf("0 is printed \n");
    }
   

   switch (h) {
   case 0:{
       printf("0 \n");
        break;
   }
   default:
        printf("default \n");
        break;

   }

      return 0;
}

