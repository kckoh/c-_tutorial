#include "array_fun.h"

int main(void){
    insert_at(0,1);
    insert_at(1,2);
    insert_at(2,3);
    show_elements();
    delete(1);
    show_elements();
}