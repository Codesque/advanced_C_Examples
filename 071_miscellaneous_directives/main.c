#include <stdio.h> 
#include <stdlib.h> 
#define SHOW_ERROR_DIRECTIVE 0


void lineDirective(){

    int x = 0;
    int y;
    int z; 

    printf("before the '#line 666' expression , the line number of the current line is %d\n", __LINE__);
    #line 666
    printf("after the '#line 666' expression , the line number of the current line is %d\n ", __LINE__); 
}

void errorDirective(){
    #if SHOW_ERROR_DIRECTIVE == 1 
        #error You can specify the error message like this !!!
    #endif 

}


int main(){

    lineDirective(); 
    /*OUTPUT:
    before the '#line 666' expression , the line number of the current line is 11
    after the '#line 666' expression , the line number of the current line is 666
    */
    errorDirective();
    // outputs when SHOW_ERROR_DIRECTIVE == 1: error: #error You can specify the error message like this !!! 






    return 0;
}