#include <stdio.h> 
int usageOfAuto();

/* WHAT ARE TOKENS ? 

A token is the smallest element of a program that is meaningful to the compiler. Tokens can be classified as : 
    //KEYWORD 
    //IDENTIFIERS 
    //CONSTANTS 
    //STRINGS 
    //SPECIAL SYMBOLS 
    //OPERATORS 
*/

/*
    auto is used to define local variables (also by default) 
    auto is used for foward declaration of nested functions 
    auto can result in non-contiguous memory allocation

            // GCC CAN ALLOCATE AUTO VARIABLES NON-CONTIGUOUSLY //

    It is possible for a auto data type which involves several components , to allocate the memory far apart. 
    For an example , real part of the complex number can be in the register while imaginary part of complex number can be in main memory

*/
int usageOfAuto(){


    // int local_function(); complation error
    auto int local_function();
    auto int a = 1;
    printf("%d", a); 
    int local_function()
    {
        int b = 2;
        printf("%d", b);
    }
    local_function();
    return 0;
}

/*
Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants , the names make a 
program easy to read and maintain
*/
int usageOfEnum(){
    enum week{ Mon , Tue , Wed , Thur , Fri , Sat , Sun}day;

    //Or you can define the flag of the enumeration(day) seperately
    //enum week day;
    day = Wed;
    printf("%d", day);
    return 0;
}
/*
External Variables are also known as global variables. These variables are defined outside of the function. These variables are available globally throughout the function execution.

*`Extern` keyword is used to extend visibility of function or variable.
*Variables with `extern` keyword are only declared not defined.BUT WHAT IS DECLARATION ? WHAT IS DEFINITION ? 

        * Declaration means implying to the program that this or that function will exist. This situation plays an important role because 
        it identfies what the variable/function datatype is going to be.  It also tell the arguments , return types and other data types 
        to the program. 

        :::::::::::::::::>>>> Declaration does not allocate the memory. 

        * Definition means declaring the function and allocating memory for that function/variable. So we can think declaration as 
        the subset of definition. ( Because definition = declaration + allocatingMemory :::: definition is bigger) 


        

        SCOPE           ------> They are not bound by any function. They are everywhere in the program i.e global.
        DEFAULT VALUE   ------> Default initialized value of global variables are 0. 
        LIFETIME        ------> Till the end of the execution of the program.  

*WORTH TO MENTION : 
-------->>  When extern is used with a variable, it’s only declared, not defined.
-------->>  As an exception, when an extern variable is declared with initialization, it is taken as the definition of the variable as well.

*/
int usageOfExtern(){
    
    extern int externVariable;
    externVariable = 3;
}

/*
Registering is faster way to access variables without allocating the memory. You can put your variables in your register instead of your memory
but worth mentioning that accessing the address of a register is invalid. Because of this we use the registers with pointers instead of 
variables that allocate the memory already. 

Some of the compilers doing the registiration for optimizing purposes. 
*/
int usageOfRegister(){
    int i = 10;
    register int *a = &i;
    printf("%d", *a); 
}

/*
sizeof is time compile unary operator which can be used to compute the size of it's operand. `sizeof` operator returns unsigned integer which denoted by size_t. 
sizeof can be used with primitive datatypes such as integer , float exc. pointers and , structured datatypes .
*/
int usageOfsizeof(){
    int a = 10;
    double d = 5.21;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    printf("Amounth of memory that is allocated to INTEGER datatype is %lu\n" , sizeof(int));  
    printf("Amounth of memory that is allocated to FLOAT datatype is %lu\n" , sizeof(float)); 
    printf("Amounth of memory that is allocated to DOUBLE datatype is %lu\n" , sizeof(double)); 
    printf("Amounth of memory that is allocated to the (10(int) + 5.21(double)) expression is %lu\n" , sizeof(a + d)); 
    printf("The length of array that contains all digits is %lu\n" , sizeof(arr)/sizeof(arr[0]) ); 
}

/*
Structure keyword are used for grouping literal datatypes into a single type. 
Structured datatypes should declarared first and then secondly initialised seperately. 
Structured members can be initialised with the help of curly({}) brackets. 

LIMITATIONS OF C STRUCTS 

    * The C structs doesnt allow us to determine our datatype as built-in. 
    * NO DATA HIDING : C Structures do not permit data hiding. Structure members can be accessed by any function , anywhere in the scope
    of structure. 
    * FUNCTIONS INSIDE STRUCTURE : C functions do not permit functions inside structures 
    * STATIC MEMBERS : C Structures can not have static members inside their body. 
    * ACCESS MODIFIERS : C programming language do not support access modifiers. 
    * CONSTRUCTION CREATION IN STRUCTURE : C Structures can not have Constructor inside of themselves. 



struct  myStructure
    {
        // These structure variables are called "FIELDS" or "MEMBERS"
        int age; 
        char name[50];
        char state[50]; 
    }; 



*/
int usageOfStructure0(){
    /*
        struct cantDefineInsideStructure{
            int age = 10;
        } cantDefine;
    */
    struct  myStructure
    {
        int age;
        char name[50];
        char state[50]; 
    }; 

    struct alsoMyStructure{
        int age;
        char* name;
        char* state;
        /*
        char name; 
        ERROR MESSAGE : main.c:131:27: warning: assignment to 'char' from 'char *' makes integer from pointer without a cast [-Wint-conversion]
        newStructureName.name = "Adam";
        */
    } newStructureName;
    //Accessing members of alsoMyStructure
    struct alsoMyStructure p1 = {21, "AdamBerg", "Married"};
    //printf("%d %s %s" , p1.age , p1.name , p1.state ); 

    // Accessing members of alsomyStructure with the new newStructureName
    newStructureName.age = 10;
    newStructureName.name = "Adam";
    newStructureName.state = "Married";
    printf("%d , %s , %s \n", newStructureName.age , newStructureName.name , newStructureName.state);
}

/*
Like primitive datatypes , we can create an array of structures. 
::::::::> struct Cars myCars[50];
*/
int usageOfStructure1(){
    struct Cars{
        char *name;
        int productionYear;
        int price;
    };

    struct Cars myCars[50];
    for (int i = 0; i < 50; i++)
    {
        myCars[i].name = "Lamborgini";
        myCars[i].productionYear = 2022;
        myCars[i].price = 1000000;
        printf("%s : production_year = %d , price = %d \n\n", myCars[i].name, myCars[i].productionYear, myCars[i].price);
    }
}

/*
Like primitive datatpes we can have the pointer of a structure. If we have a pointer of a structure , we can access fields by using 
"->" sign like this : 

printf("%s : %d  , %d" , ptr_obj->status , ptr_obj->age , ptr_obj->graduation_year);
*/
int usageOfStructure2(){

    struct Adam{
        int age;
        int graduation_year; 
        char *status;
    };
    struct Adam obj = {.graduation_year = 2025 , .status = "Married" , .age = 21};
    struct Adam *ptr_obj = &obj;

    printf("%s : %d  , %d" , ptr_obj->status , ptr_obj->age , ptr_obj->graduation_year);
}

int usageOfTypedef(){
    typedef int a1;
    a1 a = 10; // You can name your own datatypes with typedef 

    // You can name your structures differently with typedef 

    typedef struct student
    {
        char *name;
        char *status;
        char *bachleor;
        int age;
    }Ogrenci;

    Ogrenci a123 = {"Berg" , "Working" , "Computer Engineering" , 21};
    //printf("%s is %s . %s is a %s student. %s is %d years old\n." , a123.name , a123.status , a123.name , a123.bachleor 
    //, a123.name , a123.age);

    // You can declare multiple pointers in a single statement:
    typedef int *ptr;
    ptr x1 , x2 , x3 , x4; 

    // You can use arrays with typedef to increase their count.
    typedef int arr1[10]; 
    arr1 arr[20]; 
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            arr[i][j] =( i + j );
            printf("arr[%d][%d] = %d\n", i, j, i + j);
        }
    }
} 

int usageOfUnion(){


    union test{
        int x, y;
    };

    union test XandYsharesTheSameLocation;

    XandYsharesTheSameLocation.y = 404;
    XandYsharesTheSameLocation.x = 3;
    printf("When x = 3 : x:%d \t y:%d\n" ,XandYsharesTheSameLocation.x , XandYsharesTheSameLocation.y);
    XandYsharesTheSameLocation.y = 101; 
    printf("When y = 101 : x:%d \t y:%d\n" ,XandYsharesTheSameLocation.x , XandYsharesTheSameLocation.y);


    /* A POINTER OF AN STRUCTURE HAS THE LARGETS AMOUNTH OF BYTE THAT INSIDE OF THE STRUCTURE'S DATATYPES HAS .
    typedef struct x //sizeof(x) = 8 + 8 + pointer's size 
    {
        double q; 8 byte
        double y; 8 byte
        //struct x *left;// if uncommented this pointer allocate max(sizeof(q) , sizeof(y)) byte 
    }z;

    z obj = {10, 10};
    z *ptr = &obj;
    printf("%d", sizeof(ptr)); 8 Byte 
    printf("%d", sizeof(z)); 16 Byte // 24 Byte if pointer is uncommented
    */

    /* BEFORE THE USAGE OF UNION WITH NODES 
    struct NODE { // sizeof(Node) ==== 8+8+8 = 24 byte;
     struct NODE* left; //2. highest byte that a datatype has is double which has 8 Bytes
     struct NODE* right; // 3. 8 Bytes
     double data; //1. 8 Byte
 };

    */

    /* AFTER USAGE OF UNION WITH NODES
        typedef struct NODE { //5. 8 + 8 = 16 byte
     union { //4. this phrase caused 3. step
         struct
         {
             struct NODE* left; // 2. 8 Byte
             struct NODE* right; // 3. 0 Byte because left and right shared the 8 byte
                                 // They are stored in the same memory.
         } internal;
         double data; // 1. 8Byte
     } info;
         } node;
     printf("%d" , sizeof(node)); // 16
    */



} 

/*
Compilers do such optimizations that turns variables into suitable values.For an example , if we have an iterator which has a value of a variable that doesnt change , optimizers turns changeable expression into appopriate less space-consuming static values.

Because of these optimizations , our code could be broken. Compiler doesnt know when the optimization breaks the code. For this reason , we tell compile to not to optimize identified variable with the 'volatile' keyword.
*/
int usageOfVotile(){
    /* The Code given down below will be changed by the optimizer to while(1) because status isn't changing . This is unnecessary to 
    store the variable at register or memory. 
    
    int status = 0; 
    while(status == 0){
        //some code which doesnt change (status == 0)
    }
    */ 

   // compile the code down below with annd without optimization :
    const int local = 10;
    int *ptr = (int*)&local;
    printf("Initialised value of the non-volatile constant 'local' %d\n", local);

    *ptr = 100;  
    printf("Modified value of the non-volatile constant 'local' %d\n", local);

    volatile const int volatileLocal = 10;
    int *ptr1 = (int *)&volatileLocal;  
    printf("Initialised value of the volatile constant 'volatileLocal' %d\n", volatileLocal);

    *ptr1 = 100; 
    printf("Modified value of the volatile constant 'volatileLocal' %d\n", volatileLocal); 

    /* WITHOUT OPTIMIZATION , THESE ARE OUTPUTS : 
    Initialised value of the non-volatile constant 'local' 10
    Modified value of the non-volatile constant 'local' 100
    Initialised value of the volatile constant 'volatileLocal' 10
    Modified value of the volatile constant 'volatileLocal' 100
    */ 
   /* WITH OPTIMIZATION , THESE ARE OUTPUTS :
   Initialised value of the non-volatile constant 'local' 10
    Modified value of the non-volatile constant 'local' 10
    Initialised value of the volatile constant 'volatileLocal' 10
    Modified value of the volatile constant 'volatileLocal' 100 
   */

}

#include "externVariable.h"
int keywords(){
    //usageOfAuto();
    //usageOfEnum();

    /* USAGE OF EXTERN 
    printf("%d\n\n" , externVariable);
    usageOfExtern();
    printf("%d\n\n" , externVariable);
    */

    //usageOfRegister();
    //usageOfsizeof();

    // USAGE OF STRUCT
    //usageOfStructure0();
    //usageOfStructure1();
    //usageOfStructure2();

    //usageOfTypedef();
    
    //usageOfUnion();
    
    //usageOfVotile();
} 
/*
Identifiers are used as the general terminology for the naming of variables, functions and arrays
*/
void identifiers(){} 
void specialSymbols(){} 
void constants(){} 
void operators(){}

int main(){
    // C TOKENS ARE :
    keywords();
    identifiers();
    constants();
    specialSymbols();
    operators();
    return 0;
}