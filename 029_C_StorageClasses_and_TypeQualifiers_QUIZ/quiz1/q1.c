#include <stdio.h>
int increasingConstantError()
{
    int x = 5;
    int const * ptr = &x;
    //++(*ptr);//error: increment of read-only location '*ptr'
    printf("%d", x);
   
    return 0;
}

// typedef is considered as a storage class.
void multipleStorageClass(){
  //typedef static int *i; //error: multiple storage classes in declaration specifiers
  int j;
  //i a = &j;
  //printf("%d", *a);

}

void datatype_as_pointer(){
  typedef int *i;
  int j = 10;
  //i *a = &j;//warning: initialization of 'int **' from incompatible pointer type 'int *' [-Wincompatible-pointer-types]
  
  //SOLUTION TO THIS :
  int *x = &j;
  int **y = &x;
  i *a = y; // i* = int** : the left data of the assignment must me pointer to integer pointer.
  printf("%d", **a);
}
int fun()
{
  static int num = 16;
  return num--;
}
/*
Execution order of for loop : for(definition__;__condition__;__end_operation){body()}
1. definition
    1.1 : fun() ----> returns num; ----> returns 16;
    1.2 : num -= 1; ------> num = 15;

2. condition : In test condition, compiler checks for non zero value
    2.1 : fun() ----> returns num; ----> returns 15;
    2.2 : num -= 1; ------> num = 14;

3. body operations() :
    3.1 : printf("%d ", fun()); ------> fun() -----> returns num; ----> returns 14; --------> printf("%d ", 14); ------> stdout = 14;
    3.2 : num -= 1; -------> num = 13;

4. end_operation :
    2.1 : fun() ----> returns num; ----> returns 13;
    2.2 : num -= 1; ------> num = 12;


4. definition =====> return 13 , num = 12 ;
5.  condition =====> check > true : return 12 , num = 11;
6. body operation ===> return 11 , print 11 , num = 10;
7. end_operation ====> return 10 , num = 9;
.
.
.
14 11 8 5 2 // if cond > false : break for loop;
*/
void structureOf_for_loop()
{
  for(fun(); fun(); fun())
    printf("%d ", fun());

}

// static variables can only be initialised with constant literals
void initialisingStatics(){
  int x = 10;
  int y = 10;
  //static int y = x; // error: initializer element is not constant 

  if(x == y) 
     printf("Equal"); 
  else if(x > y) 
     printf("Greater"); 
  else
     printf("Less");  
}

int main(){
    //increasingConstantError(); // error: increment of read-only location '*ptr'
    //multipleStorageClass(); // error: multiple storage classes in declaration specifiers
    //datatype_as_pointer();
    //structureOf_for_loop(); // outputs 14 11 8 5 2
    initialisingStatics(); // error: initializer element is not constant
}