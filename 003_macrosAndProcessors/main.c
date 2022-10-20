#include <stdio.h> 
#include <limits.h>
/* WHEN WE USE 'INCLUDE' DIRECTIVE 
    
    1. The contents of included header file are copied to the current file after some preprocessing. 
    2. Angular brackets '<' and '>' instruct the preprocessor to look in the standart folder where all the header files are held 
       Double quotes " and " instruct the preprocessor to look into the current folder 
*/ 
#define LIMIT 1000
/* WHEN WE USE 'DEFINE' FOR A CONSTANT 

    1. The preprocessor produces a C program where : 
        The defined constant is searched 
        Matching tokens are replaced with the expression 
*/

#define myFirstMacro(x) ++x 
/*
    The macros can take function like arguments , the arguments are not checked for datatype . 
    For example the following macro myFirstMacro(x) can be used for x of any datatype 
    
*/

void macroExample1(){
    char *ptr = "WHat";
    int x = 2022;
    printf(
        "%s\n" // outputs Hat
        "%d\n",
        myFirstMacro(ptr) , myFirstMacro(x)  
    ); 
} 

#define MULTIPLY(a,b) a* b 
// The macro arguments are not evaluated before macro expansion. 
void macroExample2(){

    // The macro is expanded as 2 + 0 * 2 + 2 not 2 * 4
    printf("%d\n" , MULTIPLY(2+0 , 2+2));
    #ifdef MULTIPLY // unneccessary but I want to show how you can use ifdef with endif
        #define MULTIPLY(a,b) (a)* (b)  
    #endif
    // 1. arguments put down directly like (2+0) * (2+2) which we call macro expansion 
    // 2. Then the compiler interpret the expression
    printf("%d\n" , MULTIPLY(2+0 , 2+2));

} 

#define merge(a,b) a##b 
// The tokens passed to macros can be concatenated using ## called Token-Pasting operator 
void tokenPastingOperator(){
    printf("%d", merge(12, 34));
} 

#define token2Str(str) #str 
// A token passed to macro can be converted to a string literal by using # before it 
void convertToken2StrExample(){
    printf("%s" , token2Str(Hello World!));
}


#define MULTIPLY(a, b) a *b
#define FACTORIEL(num, output)        \
    int total = 1;                    \
    while (num > 1)                   \
    {                                 \
        total = MULTIPLY(total, num); \
        num--;                        \
    }                                 \
    output = total;

void multipleLinedMacroExample(){
    int i = 5;int temp = i;
    int factoriel_i;
    FACTORIEL(temp, factoriel_i);
    printf("%d! = %d" , i , factoriel_i ); 
}      



#define square(x) x*x 
static inline int inlineSquare(int x) { return x * x; }
int macroExample3(){
    int x = 36 / square(6); // because of macro expansion , the consequance is (36 / 6 * 6) instead of (36/(6*6)) 
    printf("%d\n", x);
    
    
    // we can get rid of this problem by using macros carefully 
    #define square(x) (x*x) 
    int y = 36 / square(6);
    printf("%d\n", y);

    // or We can use inline functions instead of macros which is recommended in C standarts 
        // NOTE : Inline functions has type checking parameter that is why C standarts recommend us to use it
    int z = 36 / inlineSquare(6);
    printf("%d\n", z);
    

    return 0;
}

// A header file may be included more than one time directly or indirectly, this leads to problems of redeclaration of same variables
// functions . To avoid this problem , directives like #defined #ifdef and #ifndef are used 
/* SOME OF THE USEFUL DIRECTIVES ARE : 
        #defined
        #ifdef
        #ifndef
        #warning
        #error
*/ 
#define MY_NAME "Dwain"  
#include <string.h>
#define THRESHOLD_YEAR 18
int commonDirectives(){ // 5**2x + 1 = 6 * 5**x // 6*5**x - 5**2x = 1 // 5**x(6-5**x) = 1 // 5**x == a : 6 - a = 1/a // a**2 + 1 = 6a
    #ifdef MY_NAME
    printf("YOU:My name is  %s\n" , MY_NAME); 
    #endif 

    #ifndef YEARS_OLD
    printf("YOU: Saddly I dont know how older I am\n");  
    #warning PROGRAM: I cant take you if you dont know your age , please define your age 
    #define YEARS_OLD 6
    #endif 


     
    /*This wont compile because before the execution of code , preprocessors work and define YEARSOLD with some value already
    int yourAge;
    scanf("%d", yourAge);
    #define YEARS_OLD yourAge
    */

    #if YEARS_OLD < THRESHOLD_YEAR 
    // uncomment to see the result :
    //#error Sorry your age is too small for this program. I am not gonna create executable files. 
    #endif
    return 0;
} 

int standartMacrosExample(){

    printf("Current File :%s\n"
            "Current Date :%s\n" 
            "Current Time :%s\n" 
            "Line Number :%d\n",
            __FILE__ , __DATE__ , __TIME__ , __LINE__
    );
    return 0;
}

float divide(float, float);
#define divide(x , y) x / y
int main(){

    printf("Defined div :%0.2f\n" , divide(10.0 , 5.0)); 
    #undef divide  
    printf("Undefined div:%0.2f\n" , divide(10.0 , 5.0)); 
    return 0;
}

float divide(float x, float y) { return y / x; } 
