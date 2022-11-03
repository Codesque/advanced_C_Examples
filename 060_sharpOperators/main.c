#include <stdio.h> 

#define concat(a , b) a##b 
#define makeStr(c) #c 

int main(){

    int adam = 10; //apples

    char x[] = "THAT IS     ";
    char y[] = "    LEGIT";
    char xy[] = "THAT IS LEGIT DUDE";

    printf("%s has %d apples\n", makeStr(adam), adam);
    printf("%s", concat(x , y)); //concatianates identifier x and identifier y , than we got identifier xy which is another variable. 
}