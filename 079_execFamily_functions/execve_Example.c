#include <stdio.h> 
#include <stdlib.h> 
#include "unistdfake.h" 

int main(int argc , char *argv[]){

    char *newargv[] = {NULL, "Hello", "World", NULL};
    char *newenviron[] = {NULL}; 

    if (argc != 2){
        fprintf(stderr, "Usage: %s <file-to-exec>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    newargv[0] = argv[1];
    execve(argv[1], newargv, newenviron);
    perror("execve");// only continues downwards towards this line if execve faced with an error
    exit(EXIT_FAILURE); 

    
    /* INPUTS AND OUTPUTS 
    PS C:\Users\AdemBerkYuksel\BTUDataStructures\079_execFamily_functions> ./execve ./myEcho
    PS C:\Users\AdemBerkYuksel\BTUDataStructures\079_execFamily_functions> argv[0] == ./myEcho
    argv[1] == Hello
    argv[2] == World
    
    */ //https://man7.org/linux/man-pages/man2/execve.2.html
    return 0;
}