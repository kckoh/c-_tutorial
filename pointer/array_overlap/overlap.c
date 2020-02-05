#include "overlap.h"

int overlap (const int* array1, const int* array2, const size_t length1, const size_t length2 ){
    return( array1 <= array2
            ? array1 + length1 > array2
            : array2 + length2 > array1
    );
}
