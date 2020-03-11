#ifndef ARRAY_FUNC
#define ARRAY_FUNC

#include "array_fun.h"
enum { MAX_NUM = 8};
enum { INVALID_INDEX = -1};

int num[MAX_NUM];
size_t num_count = 0;

void insert_at(size_t index, int n){

    size_t i;

    assert(index <= num_count);
    assert(num_count < MAX_NUM);

    for(i = num_count; i > index;--i  ){
        num[i] = num[i-1];
    }

    num[index] = n;
    ++num_count;
}


void show_elements (){
    size_t i;
    for(i = 0; i < num_count; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

void delete(size_t index){
    size_t i;
    assert(index <= num_count);

    for(i = index; i > num_count;i++  ){
        num[i] = num[i+1];
    }
    --num_count;

}


#endif
