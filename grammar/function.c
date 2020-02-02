#include <stdio.h>
int fo(void){
    return 32;
}

int main() {
   /* compile with gnu
    learning function 
    seems like if you compile with c-90 then you can use your function 
    however if you use gnu compiler then you need to define a function beforehand
    */

  int f = fo();
  
  printf("foo is: %d \n",f);
   
   return 0;
}


