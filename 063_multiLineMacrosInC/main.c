#include <stdio.h> 
#include <stdlib.h>

#define MACRO(num, str)    \
    {                      \
        printf("%d", num); \
        printf(" is a %s number\n", str);\
}

/*
When will the MACRO() expanded , the last semicolon would be the outside of the scope like this :

if (x%2==0) {
    ----MACRO_EXPANSION----
} ; The last semicolon from printf toke out to the outside of the 'if's' scope 

That is why we must use do{}while or parantheses() to pretend that macro expansion problem 
*/
void macroExpansionProblem(){

    int x;
    char ch;
    scanf("%d",&x);
    while(((ch = getchar()) != '\n' )); 

    if (x % 2 == 0)
        MACRO(x, "Even"); 
    //else if (x % 2 == 1)
        //MACRO(x, "Odd");
    //error : 'else' without a previous 'if'
}

/*SOLUTION TO MACRO EXPENSION PROBLEM */  
#define MACRO_SOLVED(num , str)    do{\
    printf("%d", num); \
    printf(" is an %s number\n", str);\
}while(0)

int main(){
    //macroExpansionProblem();

    int x;
    char ch;
    scanf("%d",&x);
    while(((ch = getchar()) != '\n' )); 

    if (x % 2 == 0)
        MACRO_SOLVED(x, "even"); 
    else if (x % 2 == 1)
        MACRO_SOLVED(x, "odd");
}