#include <stdio.h> 
/*
A temporary storage is called buffer.
When you pressed a key on your keyboard , the data isnt sent to the program . Instead , it is sent to the input/output device's buffer by your operating system. 
After a buffer is filled by scanf() , if you take any other output , it wouldn't saved due to the current buffer is already fullfilled. 
*/
void bufferProblem(){

    char str[80], ch;

    scanf("%s", str);

    ch = getchar();

    printf("%s", str);
    printf("%c", ch); 
}

void homemade_fflush_portable(){

    char text[80] , ch;

    scanf("%s", text); 

    while((getchar()) != '\n');

    ch = getchar();

    printf("\n\n%s\n\n", text);
    printf("\n\n%c\n\n", ch); 
}

int main(){
    //bufferProblem();
    /*
    input:inputText , inputcharacter
    output:inputText , inputText
    */

    homemade_fflush_portable();
    /*
    input : Hello , a 
    output: Hello , a 
    */
}