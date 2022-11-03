#include <stdio.h> 

//The C library function char *tmpnam(char *str) generates and returns a valid temporary filename which does not exist. If str is null then it simply returns the tmp file name.
void example1(){

    char buffer[L_tmpnam];

    tmpnam(buffer);
    printf("Unique filename that is just created by the tmpnam function is %s\n", buffer);
} 

// tmpnam stands for temporary name.
int main(){
    example1(); 
}
