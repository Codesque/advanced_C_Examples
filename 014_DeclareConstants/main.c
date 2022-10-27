int main(){
    // USING CONST KEYWORD
    int const a = 1;
    printf("%d", a);
    //a = 5; error: assignment of read-only variable ‘a’ 

    // ENUM KEYWORD  : enum is a user defined datatype
    enum VARS{var = 42};
    printf("\n%d\n", var); 
    
    // USING MACROS : Dont reccomended because there is no data-type checking also prone to error. 
    #define var 5  
    printf("\n%d\n", var); 
    #define var 10 
    printf("\n%d\n", var);
}