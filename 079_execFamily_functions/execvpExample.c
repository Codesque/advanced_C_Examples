#include "unistdfake.h"


int main(){

    const char* argc = "./printHello.exe";
    const char *const *argv = NULL;

    const char *args[] = {argc , argv}; 
    _execvp(argc , args);
    printf("This will be not executed , because by the execvp , the program changed to the printhello.exe");
    /*OUTPUT : 
    PS C:\Users\AdemBerkYuksel\BTUDataStructures\079_execFamily_functions> ./execvpExample.exe
    PS C:\Users\AdemBerkYuksel\BTUDataStructures\079_execFamily_functions>

    Hello World . I am executed from main.c program by the help of _execvp() method

    
    */

}