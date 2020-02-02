https://github.com/mcinglis/c-style
NULL:
Use NULL for macro
    #define NULL ((void*) 0)

Assume arguments are not NULL; if they could be, specify in the argument name
    int get_grade(const int* student_id_or_null){
         //code
    }
return functions should not be NULL; if they are, specify in the function name
    const char* get_name_or_null(const int id){
        return NULL:
    }

IncludeGuard:
Provide include guards for all headers to prevent double inclusion
    // Good
#ifndef INCLUDED_ALPHABET_H
#define INCLUDED_ALPHABET_H

...

#endif // ifndef INCLUDED_ALPHABET_H

