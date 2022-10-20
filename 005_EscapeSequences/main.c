#include <stdio.h> 
#include <string.h> 

int main(){

    // Phone or Beep Escape Sequence Example :
    printf("My mobile phone number is : 7\a8\a7\a8\a9\a4\a5\a5\a4\a3 \n");  

    // BackSpace Escape Sequence Example :
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n"); 

    // Tab (Horizontal tab) Escape Sequence Example :
    printf("\tMy name\tMy Surname\tMy Address\t"); 

    // Verticle Tab Escape Sequence Example :
    printf("\vPerson1\vPerson2\vPerson3\v \n\n\n"); 

    // Cariage Return Escape Sequence Example :
    printf("Fri \r ends\n"); 

    // BackSlach Escape Sequence Example :
    printf("with \\\\ symbol you can print the '\'  , '\"' and '\'' \n");  

    // Question Mark Escape Sequence Example :
    printf("'\\' + '\?' is used for the presentation of trigraph in the early of C programming. But now we dont have any use of it\n"); 

    // Octal Number Escape Sequence Example : \0oo
    char* s = "A\072\065";
    printf("%s\t%o\t%o\n", s, 72 , 65); 

    // Hexadecimal Number Escape Sequence Example : \xhh
    char *hexnum = "B\x4a";
    int x = 74;
    printf("%s\t%x\t", hexnum , x);   

    // important to mention '\0' is called NULL number Escape Sequence 
}