int foo() { return 5; } 

int main(){

    //static int x = foo(); // cause of error : All static variables must be initialised before the execution of main().
    static int x = 5;
    
}