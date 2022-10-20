#include <stdio.h> 

int main(){
    // Scanf family supports scanset specifiers which can be represented as '%[]'

    typedef char input[200];

    // EXAMPLE 1 
    input upperCaseText;
    printf("Enter a string :\n\n"); 
    scanf("%[A-Z]s", upperCaseText); // input = ALIBABANinkiler
    printf("\n\nYou Entered : %s\n\n", upperCaseText); // output = ALIBABAN

    //EXAMPLE 2
    input stopScanningAtDot;
    printf("\nEnter 2 seperate sentences with slicing them with a dot.\n");
    scanf("%[^.]s", stopScanningAtDot); // input = Hello stranger. My name is Adam.
    printf("\n\nYou Entered : %s\n\n", stopScanningAtDot); // output = Hello stranger

    //EXAMPLE 3
    auto void myGetsMethod(input txt);
    auto void myGetsMethod(input txt){
        printf("Enter a string with spaces :\n\n");
        scanf("%[^\n]s" , txt ); //input = Hello my name is Adam.
        printf("You entered %s\n", txt); // output = You entered Hello my name is Adam.
    };
    input myText;
    myGetsMethod(myText);
}