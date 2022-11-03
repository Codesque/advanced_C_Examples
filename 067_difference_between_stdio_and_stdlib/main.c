#include <stdio.h> 

/*Standart Input Output Library contains declarations of printf() and scanf() , and necessary header information for "File Related Input Output" functions 

BUT HOW PRINTF() IS FILE RELATED OUTPUT FUNCTION ? THERE IS NO WRITING TO ANY KIND OF FILE ? 

    //As a basic principle , in C , keyboard and display are also treated as 'files'.
    In fact keyboard input is the default stdin file stream while display output is the default stdout file stream.
*/
void standartInputOuput_headerFunctions(){
    int x;
    char ch;
    printf("Hello World");
    scanf("%d", &x);
    ch = getc(stdin);
    putc(ch , stdout);

    
}
#include <stdlib.h> 
/*Standart Input Library  contains declarations of malloc() and free() , and  necessary header information for 'Memory Allocation/Freeing' functions*/
void standartLibrary_headerFunctions(){
    void *ptr;
    ptr =(int*)malloc(sizeof(int));

    free(ptr); 
    // abort , exit , ... 
    

    /*ALSO NOTE THAT STDLIB CONTAINS SOME OF THE FUNCTIONS THAT ARENT RELATED TO MEMORY */
    int x = atoi("1");
    // exit();
    rand();
}