#include <stdio.h>
#include <string.h>

typedef struct name{
    char lastName[1024];
    char firstName[1024];
} name_t;

int main(void){
    char lastname[] = "kim";
    char firstname[] = "minjee";
    char* example = "hello"; // this is viewed in strings main

    name_t name;
    name_t clone;
    strncpy(name.lastName,lastname, sizeof(lastname));
    name.lastName[sizeof(lastname)] = '\0';
    strncpy(clone.lastName,lastname, sizeof(lastname));
    name.lastName[sizeof(lastname)] = '\0';
    name.lastName[0] = 'l';


    puts(name.lastName);
    puts(clone.lastName);
    return 0;
}