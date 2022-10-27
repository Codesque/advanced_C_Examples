/*
1. Go to the inner paranthes and read the expression from right to left 
2. Go right to higher level paranthes and read it from right to left 
3. continue doing it until no-paranthesied expression has been read. 
*/
void howToAnalyzeDeclarations(){

    int (*fp)(); // POSTFIX : fp * () int;
    // fp is a pointer of an function that returning integer;

    int(*daytab)[13]; // POSTFIX : daytab * [13] int;
                      // daytab is a pointer of an array that has 13 integers;

    void (*f[10])(int, int); // POSTFIX : f[10] * (int , int) void 
                            // f is an pointer array which has 10 pointers to functions that takes 2 integer arguments and returns void

    char (*(*z())[])(); // POSTFIX : z () * [] * () char ;
                        // z is a function that returns pointer to an array of pointers to a function that returning char;

    char(*(*x[3])())[5]; // POSTFIX : x[3] * () * [5] char; 
                        // x is an array of 3 pointers to functions that returns pointers to five chars

    int *(*(*arr[5])())(); // POSTFIX : arr[5] * () * () *int ; 
                            // arr is an array of 5 pointers to functions that returns pointer to function that returning pointer to int

    void (*bsd_signal(int sig, void (*func)(int)))(int); // POSTFIX : 
                                                        // DIVIDE AND CONQUER : 
                                                            // void (*x) (int) : x() * (int) void 
                                                            // x() returns a pointer to a function that takes int argument and returns void 
                                                        
                                                        // bsd signal is a fnction that takes 2 arguments : 
                                                            // 1. an integer sig 
                                                            // 2. func * (int) void 
                                                            // func_var points to a function that takes integer argument and returns void


                                                        // concluion : bsd_signal (...) * (int void)  
                                                        // bsd_signal ,which takes an integer and a pointer to a function that returns void
                                                        // as an argument , returns a pointer to a function that takes integer arguments 
                                                        // and returns void 
}

int main(){
    howToAnalyzeDeclarations();
}