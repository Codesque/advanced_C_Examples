#include <stdio.h>  
#include <stdlib.h> 

void pointer_increment(){
    for (int i = 0; i < 2;i++){

    char name[] = "Adem Berk Yuksel";
    char *ptr = &name;

    if (i == 0){
    ++*ptr; // compiler postfixes that as ++(ptr*) (remember that we are reading right to left) 
    printf("++*ptr = %c\n", *ptr ); // outputs : ++*ptr = B

    //explanation : As you can see from the postfix , first take what the pointer points to , secondly increase that value. 
    }

    else if (i == 1){
    *ptr++; // compiler postfixes that as *(ptr++)
    printf("*ptr++ = %c\n", *ptr); // outputs : *ptr++ = d

    //explanation : As you can see from the postfix , it increases the pointer value which denotes ememory address and then dereference that expression
    }
    }


}

/*
Expression : ++a + a++;
1. + operation has LTR associtivity. Because of this we will look at the ++a ;
2. ++a means increase the a by one but assign the value later. so value is 1+1 = 2 but not assigned yet;
3. a++ means assign first than increase later. This expression will be expanded as 2, but after that the value will increase 1. value+1 = 3;
4. Now it is time for the assignment of ++a. value of a was 3. So this expression will be expanded as 3; 
5. 3 + 2 will be expanded as 5. 
*/
void orderof_assignment_and_increment(){
    int a = 1;
    printf("\n\na:%d", (++a + a++));
}

int main(){

    pointer_increment();
    orderof_assignment_and_increment();

    return 0; 
}
