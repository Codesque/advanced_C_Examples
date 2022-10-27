#include <stdio.h> 
#include <stdint.h> // NOTE : necessary for %x convention 
int x = 2016;
int y = 2017; 

int main(){

    b(); // uninitialised x and make it double.
    printf("0x%x , 0x%x", x, y); //output = 0x0 , 0x80000000
    return 0;  

    /* Compiles but has a major nasty bug. To pretend this kind of situation , you can compile your program with this kind of flag 

    PS C:\Users\AdemBerkYuksel\BTUDataStructures\010_LinkersResolvingGlobals\2MultipleStrongSymbolsWithTheSameVariableName\Example4> gcc -o linkerFlag2pretend -fno-common  foo4.c bar4.c
    foo4.c: In function 'main':
    foo4.c:8:5: warning: implicit declaration of function 'b' [-Wimplicit-function-declaration]
        b(); // uninitialised x and make it double.
         ^
    C:\Users\ADEMBE~1\AppData\Local\Temp\ccttEWBw.o:bar4.c:(.bss+0x0): multiple definition of `x'
    C:\Users\ADEMBE~1\AppData\Local\Temp\ccSj3DkZ.o:foo4.c:(.data+0x0): first defined here
    collect2.exe: error: ld returned 1 exit status 

    //returns you the multiple definitions that can break down your program. 
    
    */

}