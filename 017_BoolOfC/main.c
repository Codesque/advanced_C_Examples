#include <stdbool.h>  
#include <stdio.h>

int main(){

    // In C , you can only use built in true-false statements with the help of the header file : stdbool.h 
    if(true){printf("Hello"); }  

    //Or you can create your own boolean datatype by using enum :
    typedef enum{F,T} boolean;
    boolean bool1, bool2;

    bool1 = T;

    if (bool1 == 1){
        printf("HELLO , Custom boolean");
    }

    bool2 = F;
    if(bool2 == (0)){ 
        printf("HOW are you , custom boolean ?");
    }
}