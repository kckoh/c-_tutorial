#include <stdio.h>
#include "represent_info.h"

void show_bytes(byte_pointer start, size_t len){
    int i;
    for( i = 0; i < len;i++){
        printf(" %.2x",start[i]);
    }
}

void show_float(float x){
    show_bytes( (byte_pointer) &x, sizeof(float));
}

void show_int(int x){
    show_bytes( (byte_pointer) &x, sizeof(int));
}

void show_pointer(void* x){
    show_bytes( (byte_pointer) &x, sizeof(void *));
}

int is_little_endian(){
    int i = 1;
    byte_pointer x = (byte_pointer) &i;
    return x[0];
}

int tadd_ok(int x, int y){
    int sum = x+y;
    int p_over = x && y && sum <0;
    int n_over = !(x && y) && sum > 0;
    return !(p_over || n_over);
}