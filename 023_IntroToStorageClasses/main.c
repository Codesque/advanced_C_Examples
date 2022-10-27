#include <stdio.h>

/*
Auto classes are :
Stored in STACK
Initialised with GARBAGE VALUE after the first declaration 
Scope is WITHIN BLOCK 
Lifetime ends at the END OF BLOCK 
*/
void autoExample(){

    auto void localFunc(); 

    void localFunc(){
        printf("Hello , I am a local function");
    }
    localFunc();
}
/*
Registers are very similar to auto variables. The only difference is that , accessing register variables are much more faster than the auto ones. But be carefull you can not access register's adress.
Register classes are : 
Stored in CPU Register 
Initialised with GARBAGE VALUE after the first declaration.  
Scope is WITHIN BLOCK 
Lifetime ends at the END OF BLOCK 
*/
void regiterExample(){

    register int x = 5;
    int *ptr;

    //ptr = &x; //error: address of register variable 'x' requested
    //printf("%d", *(ptr));
}

/*
Extern keyword is used to extend the visibility of that identifier.
Extern classes are :
Stored in DATA SEGMENT
Initialised 0 after the first declaration 
Scope is global , includes MULTIPLE FILES 
Lifetime is till the END OF THE PROGRAM
*/
void externExample(){
    extern int x;
    int y;

    printf("\n%d\n", y); // outputs 0
    printf("\n%d\n", x);  // outputs 10

    
}
int x = 10;
int y = 10;

void staticExample(){

    for (int i = 0; i < 5; i++){
        static int p = 10;
        int q = 10;

        p++;
        q++;
        printf("value of Static variable at the %d iteration is %d\n", i+1, p); 
        printf("value of default variable at the %d iteration is %d\n", i+1, q); 
    }
}

int main(){

    autoExample(); //outputs : Hello , I am a local function
    regiterExample();

    externExample(); // outputs 0 and 10;
    staticExample(); // static variable initialised once and increased without defining itself again and again unlike default variables
    //which are defined in the scope of some loop-function. 


    return 0;
}