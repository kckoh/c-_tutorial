#ifndef REPRESENT_INFO
#define REPRESENT_INFO
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start, size_t len);

void show_float(float x);

void show_int(int x);

void show_pointer(void* x);

int is_little_endian();

int tadd_ok(int x, int y);

#endif