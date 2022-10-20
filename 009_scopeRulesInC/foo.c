#include "example.h"

int global_foo = 404;
static int local_foo = 404; 

int foo_function(){
    // sees : global_foo and local_foo 
}