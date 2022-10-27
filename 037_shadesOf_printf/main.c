#include <stdio.h> 
#include <string.h>

//printf function is used to print the characters on the stream of stdout console.
void usageOf_printf(){
    printf("\n\n%d\n\n" , printf("printf returns the number of the characters that printed")); 
} 

//instead of printing the input on the console , sprintf stores the input on a char buffer
void usageOf_sprintf(){

    typedef char buffer[100];
    buffer text;
    int a = 10, b = 9 , c = 8;
    sprintf(text , "\n\na = %d , b = %d , c = %d\n\n",a,b,c);
    printf("%s", text);
}

//instead of printing on console , fprintf prints the script on a file.
void usageOf_fprintf(){
    typedef char input[100];

    FILE *fptr = fopen("fname.txt", "w");
    input text;

    if (fptr == NULL){
        printf("Couldnt open the file. Please try again");
    } 
    else {
        for (int i = 0; i < 100; i++){

            gets(text);
            if ( strcmp(text , "q" )== 0){
                break;
            }
            fprintf(fptr , "%d.%s\n", i, text ); 
        }
    }

    fclose(fptr);
}


int main(){
    usageOf_printf();
    usageOf_sprintf();
    usageOf_fprintf();
    return 0;
}