#include <stdio.h> 
/*
PS C:> gcc main.c -o example
main.c: In function 'main':
main.c:5:9: error: redefinition of 'x'
     int x = 10;
         ^
main.c:4:9: note: previous definition of 'x' was here
     int x = 5;
*/
int redefinitionInLocal(){
    int x = 5;
    //int x = 10; //Uncomment to see the error
    printf("%d", x);
    return 0; 
}
int y = 10;
int y = 5;
/*
main.c:18:5: error: redefinition of 'y'
 int y = 5;
     ^
main.c:17:5: note: previous definition of 'y' was here
 int y = 10;
*/
int redefinitonInGlobal(){
    printf("%d", y);
}

int x;
int x = 5;
//C allows a global variable to be declared again when first declaration doesn’t initialize the variable.
// In C++ This function gives an error. C++ wont let redeclarations in global.
int redeclarationInGlobal(){  
    printf("%d", x); // works fine 
}  


int main(){
    redefinitonInGlobal();
}


