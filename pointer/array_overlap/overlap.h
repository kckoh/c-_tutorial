#ifndef OVERLAP
#define OVERLAP
#define FALSE (0)
#define TRUE (1)
#define ARRAY_LENGTH(arr) ( sizeof(arr) / sizeof(arr[0]) )
int overlap (const int* array1, const int* array2, const size_t length1, const size_t length2 );

#endif