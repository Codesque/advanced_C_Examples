#include <stdio.h> 
#include <stdlib.h> 
/*
a % n = a - (n * trunc(a / n) )
*/
int modulusFormula(int number , int mod){
    
    return number - ( mod * ((int)number / mod) );
} 

// if you want to find the correct reminder for negative numbers such as -10/3 , you should use this formula : 
int findReminder(int number , int divisor){
    return (((number % divisor) + divisor) % divisor);
}


int main(){

    printf("8 %% 3 = %d\n", modulusFormula(8, 3));
    printf("-8 %% 3 = %d and modulus(-8 , 3) = %d\n", -8 % 3, modulusFormula(-8, 3));


    printf("-3 %% 8 = %d\n", modulusFormula(-3,8));
    printf("3 %% -8 = %d and modulus(3 , -8) = %d\n", 3 % -8, modulusFormula(3 , -8));

    int x = -10;
    int y = 3;

    printf("%d divided by %d . Reminder is %d\n", x, y, findReminder(x, y)); 

    /*ASSOCITIVITY EXAMPLE WITH MODULUS OPERATOR*/
    printf("The conseqence is %d", 3 % -8 / 2);
    //  1. % and * and / operators have the same presedence. Because of that , LTR activated
    //  2. 3%-8 is the leftest expression and equals to 3 - ( -8 * ((int)3 / -8)) which is equivelant to 3
    //  3. 3 / 2 = 1.5
    //  4. (int) 1.5 = 1; 
    
}