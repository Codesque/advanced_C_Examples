#include <stdio.h> 
#include <string.h>
/*Linker looks at the outside of "extern" keyword to find the definition of that function at somewhere. Thus It cant see local variables*/ 
void linkerLooksWhat(){
extern int i; 
//printf("%d ", i);//error : undefined reference to `i'
  {
       int i = 10;
       printf("%d ", i);
  }
}

// You cant change the value of pointer if pointer points to constant datatype. But you can change the pointer's address
void valueof_ptr2const_is_immutable(){
    int i = 10;
    const int *ptr = &i;
    //*ptr = 100;//error: assignment of read-only location '*ptr'
    printf("i = %dn", i);
}

char *fun()
{
    static char arr[1024];
    return arr;
} 

/*
When value of pointer to char assigned to pointer of static char , the pointer to char becomes that pointer to static char itself.
(Pass by referance)
*/
void returningStaticVars(){
    char *str = "Alright Earth !";
    strcpy(fun(), str);//strcpy(fun() , str) =====> strcpy(static arr , str) ====> static arr = str;
    str = fun();       // str = static arr ====> str = (static) str;
    strcpy(str, "Hello World!"); // str = static arr = "Hello World";
    printf("%s", fun());         // printf(static arr);
}

int main(){
    linkerLooksWhat(); // error: undefined reference to `i'
    valueof_ptr2const_is_immutable(); //error: assignment of read-only location '*ptr'
    returningStaticVars(); // outputs : Hello World! 
    
}