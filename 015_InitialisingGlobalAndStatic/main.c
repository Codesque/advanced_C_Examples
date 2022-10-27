#include <stdlib.h> 
#include <stdio.h>
int func(int x) { return 5; } // functions returns non_consistant values

int y = func(20); // a global variable y tries to be initialised with a non_constant value. 
int *p = (int *)malloc(sizeof(int); // global pointer tries to be initialised

/*
Global and Static variables must be defined with constant values. 
That is because globals and statics are initialised by the compiler itself.
*/
int main(){
    static int *z = (int *)malloc(sizeof(z));  // static pointer tries to be initialised with non_cons value.
}