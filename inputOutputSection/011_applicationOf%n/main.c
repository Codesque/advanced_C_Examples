#include <stdio.h> 

int main(){ // %n is not working on my computer.
    int c;
    printf("ThereAre30CharactersBeforethis%na" , &c );
    printf("%d", c);
    getchar();
}