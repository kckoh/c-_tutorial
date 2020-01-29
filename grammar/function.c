#include <stdio.h>

int main() {
   /* compile with gnu
    learning function 
    seems like if you compile with c-90 then function is considered c if not defined earlier
    however if its gnu compiler then you need to define beforehand
    */

  int f = fo();
   printf("foo is: %d \n",f);
   
   return 0;
}

int fo(void){
    return 32;
}

