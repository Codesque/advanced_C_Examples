#include <stdio.h> 
#include <string.h> 


// strlen takes a char pointer as an argument.While searching for a null character , counts how many pointers passed through the method. It stops until facing any null character.
void what_strlen_does(){

    char z[] = {'D', 'E', 'E', 'Z', '\0', 'N', 'U', 'L', 'L', 'S', '\0'};
    printf("strlen('D', 'E', 'E', 'Z', '\\0', 'N', 'U', 'L', 'L', 'S', '\\0') = %d\n", strlen(z)); // outputs 4;
}

int main(){
    char x[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char y[] = "HELLO";
    printf("The sizeof(x) = %d while the sizeof(y) = %d\n" , sizeof(x) , sizeof(y)); 
    // As you can see from the output , there is always a secret NULL character at the end of the string.

    what_strlen_does();

    printf("sizeof(x) = %d , strlen(x) = %d\n", sizeof(x), strlen(x)); //outputs sizeof(x) = 6 , strlen(x) = 5 
    // sizeof measures how much memory the statement allocates. It also considers the NULL character from the string. 
    // meanwhile strlen can only applied to strings and measures how many char pointers are there before the NULL character. Simply ignores the entity of the NULL character. 

}