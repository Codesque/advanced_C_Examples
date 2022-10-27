#include <stdio.h> 

static int animals = 8; // global variable that is linked internally with the keyword 'static'
const int i = 5;  // global constant variable.

int call_me(void){
    printf("%d %d", i, animals); 
} 
