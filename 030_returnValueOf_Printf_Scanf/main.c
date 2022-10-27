#include <stdio.h>
int main(){
    typedef char script[50];

    script x = "Ihave17characters";
    printf("If you printf the '%s' script , printf method returns %d which implies the amount of characters that script has\n", 
    x , printf(x)
    );

    script a, b, c;
    //printf("%d" , scanf("%s",a));
    printf("If you scanf with x amouth of successfully scanned argument , it returns x \n"
           "For an example, scanf('%%s' , a) returns %d\n"
           "For an example, scanf('%%s%%s' , a , b) returns %d\n"
           "For an example, scanf('%%s%%s%%s' , a , b , c) returns %d\n",
           scanf("%s", a ) , scanf("%s%s",a,b) , scanf("%s%s%s",a,b,c)); 
}