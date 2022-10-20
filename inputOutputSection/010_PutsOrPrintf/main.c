#include <stdio.h> 

int main(){

    /*
    puts() are preferred for printing statements because : 

        *The Implementation of puts is simpler than printf.Executing printf is expensive than puts.
        *With string formatting characters(like %s) , printf can give you unexpected results 
        *Also if the text that we are gonna print is user defined , some security issues might occur while using printf instead of puts. 
    
    NOTE : puts put the cursor on the next line. To pretend this , we can use fputs() instead.
    */

    puts("Adam Berg");
    puts("Yuksel");
    /* OUTPUT OF PUTS() 
    Adam Berg
    Yuksel
    */

    fputs("Adam Berg" , stdout);
    fputs("Yuksel" , stdout); 
    /* OUTPUT OF FPUTS()
    Adam BergYuksel
    */
    printf("Adam Berg");
    printf("Yuksel"); 
    /* OUTPUT OF PRINTF
    Adam BergYuksel
    */

    printf("Adem%sBeriku%s"); // output = Adem¶f▲Beriku@♂▲
    getchar();

    puts("Adem%sBeriku%s"); // output = Adem%sBeriku%s
    getchar();


}