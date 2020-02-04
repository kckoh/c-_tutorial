

#include <stdio.h>

int main() {
   /* compile with gnu
    learning function 
    seems like if you compile with c-90 then you can use your function 
    however if you use gnu compiler then you need to define a function beforehand
    */
  
  const int leng = 5;
  const size_t leng1 = 100;
  const int arr [3] = {2,2,3};

    // keep explore pointer
  printf("size of int: %ld  size of size_t: %ld \n", sizeof(leng), sizeof(leng1) );
  printf("what is in array with name %p \n", arr   );
  printf("what is in the de reference of the array %d \n", *arr);
   
   return 0;
}
