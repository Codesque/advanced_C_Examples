#include <stdio.h> 
#include <stdlib.h> 


#define likely(x) __builtin_expect(!!(x) , 1) 
#define unlikely(x) __builtin_expect(!!(x) , 0) 
/* WHAT DOES !!(x) DO ?*/

/*
    !!(x) will guarantee that the final expression either will be 1 or 0 . In C all the numbers that is greater than zero considered as 1.
    But we dont want our x value to be something greater than 1. So we basicly put it on a logical operation twice to make it bool.
*/

/* HOW DOES THAT OPTIMIZE OUR CODE ?*/ 

/*
    It optimizes our code in assembly level that the unlikely instructions go to the end of the program such that 
    we dont need to jump over to the other instructions easily.
*/



int main(){

    const char *home_dir;

    home_dir = getenv("HOME");
    if (likely(home_dir)) // That is unlikely to no get homedir. We can optimize our code by using likely.
        printf("home directory: %s\n", home_dir);
    else
        perror("getenv"),printf("a");
        
}
