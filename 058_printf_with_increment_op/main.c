#include <stdio.h> 
#include <stdlib.h> 






int main(){

    int i = 0;
    printf("%d , %d , %d", ++i, ++i, i++);//output of this expression is compiler and case dependent 
    // Generally , C compilers choose to read printf arguments from right to left 

    //  1.i++ will be read. It is post-increment operator which firstly assign i then increase it's value. 
//So the i value printed 0 then it's value increased by 1. 

    //  2.++i will be read. It is pre-increment operator which firstly increases the value then assign the consequence value of that variable
// So the i value will be increased by 1 which becomes 2. Assignment/printing the value will be done after all of the  increments would be done. 
    
    //  3.Last ++i will be read. It is again , the pre-inrement operator. So the value increased by one which becomes 3. 
//  So after the last increment , all the increments would be finished. Lastly we will assign the values of pre-increment values.
//  That is why the last two expression are gonna be equal.

    // outputs : 3 , 3 , 0;
}