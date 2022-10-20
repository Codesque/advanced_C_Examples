#include <stdio.h>

int x; // global variable x
// When we create a local/global variable(without extern) , compiler declares and defines with a automatic value. 
// Creating a variable without extern = Telling memory that you want some storage for a variable = Declaration and Definition.

extern int y; //global variable y 
// When we use the 'extern' key, the variable are DECLARED BUT NOT DEFINED. With this kind of approach , we can define it within multiple c files
/* When static variables are defined , they are not defined again and again unless they can be initialised. 
p is static variable but q is not:
*****************

 p :40   q :40

*****************

*****************

 p :50   q :40

*****************

*****************

 p :60   q :40

*****************
*/
void usageOfStaticVariables(){
    static int p = 30;
    int q = 30;
    p += 10;
    q += 10;
    printf("*****************\n\n p :%d\t q :%d\n\n*****************\n\n", p , q ); 
}

int main(){

    {
        int z = 10; 
        // local variables have the scope of the bracket. They cant go ever brackets any further. 
    } 
    //printf("%d", z); // error: 'z' undeclared (first use in this function)


    usageOfStaticVariables();
    usageOfStaticVariables();
    usageOfStaticVariables(); 
}