#include <stdio.h> 
#include <stdlib.h>

void foo1();
void bar1();

void __attribute__((constructor)) foo1();
void __attribute__((destructor)) bar1(); 


void foo1(){
    printf("Inside of the foo1()\n\t");
}

void bar1(){
    printf("Inside of the bar1()\n");
}


int main(){

    //bar1();
    //foo1();
    printf("Inside of main function()\n\t\t");
    /*OUTPUT ON EXECUTION OF IDE
    Inside of the foo1()
        Inside of main function()
                Inside of the bar1()
    */ 

   /* OUTPUT ON gcc without commenting bar1 and foo1: 
    Inside of the foo1()
            Inside of the bar1()
    Inside of the foo1()
            Inside of main function()
                    Inside of the bar1()
   */

  /* OUTPUT ON gcc with commenting foo1 and bar1
  Inside of the foo1()
        Inside of main function()
                Inside of the bar1()
  */
}

