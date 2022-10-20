#include <stdio.h> 

int main(){

    int ch; // It is recommended for you to take the return value of getchar() with an integer.
    //char ch; // C9X Standarts dont recommend this. It can cause some problems. 
    while ((ch = getchar()) != EOF){
        //putchar(ch); //outputs the char sequence 
        if ( ch == 'q'){ // q + enter to exit
            break;
        }
    }
}