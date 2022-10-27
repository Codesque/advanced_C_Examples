#include <stdio.h>
int x = 12345;
int main(){
    b();
    printf("%d" , x);  

    /*
    PS C:\Users\AdemBerkYuksel\BTUDataStructures\010_LinkersResolvingGlobals\2MultipleStrongSymbolsWithTheSameVariableName\Example3> gcc foo3.c bar3.c
    foo3.c: In function 'main':
    foo3.c:4:5: warning: implicit declaration of function 'b' [-Wimplicit-function-declaration]
        b();
        ^
    PS C:\Users\AdemBerkYuksel\BTUDataStructures\010_LinkersResolvingGlobals\2MultipleStrongSymbolsWithTheSameVariableName\Example3> ./a.exe        
    666
    */
}