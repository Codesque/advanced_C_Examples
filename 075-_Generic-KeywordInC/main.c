#include <stdio.h> 
#include <stdlib.h>



/*
With the help of _Generic function , we can do operations based on type checking within macros. 
This solves macros biggest weakness against constants
*/
#define INC(x) _Generic( (x) , char: (char)(((int)x) + 1) , int : x + 1 , default : x++) 

int main(){
    int x = 10;
    char y = {'a'};

    printf("10+1 is %d and 'a' + 1 is %c \n\n", INC(x), INC(y)); // outputs : 10+1 is 11 and 'a' + 1 is b

    // Also you can use _Generic at the main like a method

    printf("%d\n", _Generic('a', int : 10, char : 20, default : 30)); //chars are also considered as integers // outputs : 10
    printf("%d\n", _Generic(0.1f, int : 404, double : 303, char : 202, float : 1, default: -1)); // outputs : 1
}