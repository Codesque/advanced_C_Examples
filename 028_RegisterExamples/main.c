

// Variable that is stored as the 'Register' class applies  cant be global:
//register int x = 10; //error: register name not specified for 'x'


int main(){

// If an identifier takes the register keyword , it can not take anymore storage classes as the C standarts suggests that a identifier 
// can have maximum 1 storage class :

    //register static int x; //error: multiple storage classes in declaration specifiers 

// identifier that has register keyword may stored in Register instead of memory. Thus , accessing the addres of a register is invalid 
//(You can only access the memory's address)
    
    register int i = 10;
    //int *ptr = &i; //error: address of register variable 'i' requested 

// register keyword can be used with pointers :

    int j = 10;
    register int *ptr = &j; 

// You can assign register keyword as much as you want . There is no limitation.
}