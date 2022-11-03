#include <stdio.h> 
#include <stdlib.h> 


/*if we consider the starting of PlainOldData is 0x00 , the c value of the POD would be placed at 50 bytes  after the 0x00
Which equals to 0x32*/
#define OFFSETOF(TYPE , ELEMENT) ((size_t) &(((TYPE*)0)->ELEMENT  )) 

int main(){

    typedef struct PlainOldData
    {
        int nums[10]; //40 bytes
        char string[10]; // 10 bytes
        char c;          // 40 + 10 = 50; should be placed at 50 bytes after the starting point of POD.
    }POD;

    size_t placementOnMemory = OFFSETOF(POD, c);
    printf("if we consider the starting of PlainOldData is 0x00 , the c value of the POD would be placed at %lu bytes  after the 0x00\n"
    "Which equals to 0x%x"
    , placementOnMemory  , placementOnMemory );

    /*
    We may consider the address operator & is redundant.
    Without address operator in macro, the code de-references the element of structure placed at NULL address. 
    It causes an access violation exception (segmentation fault) at runtime. 
    Note that there are other ways to implement offsetof macro according to compiler behaviour.
    */
}