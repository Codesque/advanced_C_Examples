#include <stdio.h> 
#include <stdlib.h> 
#include <stdint.h>
#include <stddef.h>


#define typename(x) _Generic((x),        /* Get the name of a type */             \
                                                                                  \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                                                             \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "pointer to char",        \
       void *: "pointer to void",                int *: "pointer to int",         \
      default: "other")




#define fmt "%20s is type of '%s'\n"
int example1(){



  size_t s; 
  ptrdiff_t p; 
  intmax_t i; 
  int ai[3] = {0}; 
  return printf( fmt fmt fmt fmt fmt fmt fmt fmt,

     "size_t", typename(s),               "ptrdiff_t", typename(p),     
   "intmax_t", typename(i),      "character constant", typename('0'),
 "0x7FFFFFFF", typename(0x7FFFFFFF),     "0xFFFFFFFF", typename(0xFFFFFFFF),
"0x7FFFFFFFU", typename(0x7FFFFFFFU),  "array of int", typename(ai)
);

}

void usageOfTernary(){

    
    static int x = 10;
    int q = 11;
    auto int foo();
    auto int bar();

    char y = 'a';
    char z = 'B';
    int consequance;
    int consequance1;

    int foo(){
        printf("foo executed , %d\t", x);
        return x++; } 
    int bar() {
        printf("bar executed , %d\t", x);
        return ++x; }
    consequance = (bar() == 11 ? foo() + bar() + foo() + foo() : foo() + bar()); // 11 + 12 + 13 + 14
     
    //  (head(condition) ? first half of body(if the condition is true) : second half of the body(if the condition is false));
    //  1. conditional statement is controlled , after execution of bar() , 11 == 11 which expanded to be true.
    //  2. after that , the first half of the body part is executed if the head part is true.

    //  NOTE: There is a sequance point after the evaluation of first condition. Which we can remeber by comma operator (comma also has a sequance point) 
    //  Execution of the first statement is guaranteed , after that the side effect of the chosen body part will be executed

    (10 < 3 ? x : y); // outputs y value as an integer
    // Explanation : output of the ternary operation is determined by the first half of the body.


    volatile int xx = 10;
    volatile int xy = 3;
    float yy = 10.0f;
    char yz[] = "Hellllloooooo";
    //(xx < xy ? yy : yz); //error: type mismatch in conditional expression
}


int main(){
    //example1();
    usageOfTernary();
}