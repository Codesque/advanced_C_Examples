#include <stdio.h> 
#include <conio.h> // for the usage of getch and getche

void usageOf_getc(){
    printf("%c", getc(stdin));
    // INPUT : Hello World!
    // OUTPUT : H 
}

void usageOf_getchar(){
    printf("%c", getchar()); 
    // there is no difference between getc(stdin) and getchar() 
}

// getch dont wait customer to press enter. Directly returns the integer value of the given char.Also it is not included in standart library.
void usageOf_getch(){
    printf("\n%c\n", getch());
}

// equivalent of getch but also prints the input. 
void usageOf_getche(){
    printf("%c", getche()); // outputs double of the given char character because input is also printed to the console. 
}

int main(){

    //usageOf_getc();
    //usageOf_getchar();
    //usageOf_getch();
    usageOf_getche();
    return  0;
}