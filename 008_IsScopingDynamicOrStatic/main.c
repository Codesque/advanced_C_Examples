#include <stdio.h> 

/*
C variables are always staticly scoped. Which means the area that a defined variable can effect cant be changed during the program. 
The example down below explains it well.
*/
int x = 404;
int func(){return x;}
int main(){

    int x = 10;
    printf("%d" , func()); // outputs 404 instead of 10. 
    /*
    Because the return value 'x''s scope is globaly determined. Defining with the same name doesnt change the scope of the return value x.
    */
}