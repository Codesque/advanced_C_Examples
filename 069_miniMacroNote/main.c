#include <stdio.h>

#define add(a,b) (a+b)

int recursiveAdd(int a , int b){
    if (a != b){
        return add(a , recursiveAdd(a+1 , b));
    }
    else {
        return 0;
    } 
}

int main()
{
    /*Preprocessor is a system software that : 
        *   Removes comments like this comment in the preprocess event. 
        *   File Inclusion: Includes libraries
        *   Macro Expansion: Macros can be called as small functions that are not as overhead to process. 
        If we have to write a function (having a small definition) that needs to be called recursively (again and again), 
        then we should prefer a macro over a function.
        So, defining these macros is done by preprocessor.

        */
    printf("Hello World!");
    int x = 5;
    int y = 10;
    printf("%d-%d : %d", x , y , recursiveAdd(x, y));
}