#include <stdio.h>


int main(int argc , char *argv[]){

    int i = 1;
    printf("%d %d %d\n ", ++i, i++, i);
    // outputs : 3 1 3 on windows 10 - gcc version 8.1.0 (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 
    return 0;
}

/*
                                        INTRO TO UNDEFINED AND UNSPECIFIED BEHAVIORS IN C 

    C standart leaves some behavior of many C constructs as undefined and some as unspecified to simplify the specification and 
    allow some flexibility in implementation. 

    For example in C the use of any automatic variable before it has been initialised yields undefined behaviour and order of evaluations 
    of subexpressions is unspecified. The specifically frees the compiler to do whatever is the easiest or most efficient, should such a
    program be submitted. 

    *WHAT TO DO WITH PROGRAMS WHOSE BEHAVIOUR IS UNDEFINED OR UNSPECIFIED IN STANDART ? 

    As a programmer it is never a good idea to use undefined/unspecified behaviored constructs in your program.  The output of such 
    programs becomes machine-dependent and compiler-dependent when you done it.    


*/