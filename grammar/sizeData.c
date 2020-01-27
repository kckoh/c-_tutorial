#include <stdio.h>
#include <limits.h>


int main() {
   /* learn the size of primitive data
    size_t is unsigned long
    char is 1 byte and 8 bits in the platform
    */

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("Size of int data type : %lu\n",sizeof(int));
   printf("Size of char data type : %lu\n",sizeof(char));
   printf("Size of float data type : %lu\n",sizeof(float));
   printf("Size of double data type : %lu\n",sizeof(double));    

   
   return 0;
}


