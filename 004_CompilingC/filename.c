//program for the addition of two numbers 
#include <stdio.h> 
#define add(a,b) (a+b) 

int main(){
    int a = 5, b = 4;
    printf("Addition is: %d\n", add(a,b));
    return 0;
}

/* WHAT GOES INSIDE THE COMPLATION PROCESS (look at terminal_command2.txt if you didnt understand what we mean by saying COMPLATION) 

    1.PRE-PROCESSING 

        The first phase through which source code is passed. This phase include : 

            * Removal of Comments 
            * Expansion of Macros : printf contains now a + b rather than add(a,b) thats because macros have expanded
            * Expansion of the included files : #include <stdio.h> is missing instead we see lots of code. So header files has been
        expanded and included in our source code file.
            * Conditional compilation 

        ::::::> Preprocessed source code stored in filename.i 
    2.COMPILATION  

    from compiling filename.i which includes preprocessed source code , we get filename.s what we call INTERMEDIATE COMPILED OUTPUT(ICO).
    ::::::> ICO file is in ASSEMBLY LEVEL INSTRUCTIONS.

    3.ASSEMBLY

    From filename.s we get filename.o which includes MACHINE-LEVEL INSTRUCTIONS by the help of THE ASSEMBLER .
    :::::::> Only Existing code is converted into machine language , the function calls like printf are NOT RESOLVED.

    4.LINKING 

    ::::::::> Function definitions are done. 

    :::::::::> Linker which know where all the functions are , add some extra code to our program to start and end correctly. 
    // From the sentence you can understand the fact that linking process increases our code's file size by turning object file to 
    an executable file.





*/