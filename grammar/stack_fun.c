#include <stdio.h>

int func(const int data[]);

int main() {
   /* my first program in C */
   /* compile with gnu
    gcc -o hello.out
    */
   int arr[5];
   printf("size of int array: %lu  size of function with array:%lu \n", sizeof(arr), sizeof(func(arr)));

   
   return 0;
}
