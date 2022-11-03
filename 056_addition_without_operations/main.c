#include <stdio.h>

int add(int x , int y){
    return printf("%*c%*c" , x , ' ' , y , ' ');
}

int add_using_increment_op(int a , int b){

    auto int while_add( int bigger , int smaller);

    int while_add(int bigger , int smaller){ 

        if (smaller > 0){
            while(smaller > 0){
                --smaller;
                ++bigger;
            }
        } 

        else if (smaller < 0){
            while(smaller < 0){
                ++smaller;
                --bigger;
            }
        }

        return bigger;
    }; 

    if(a > b){
        return while_add(a, b);
    } 
    else {
        return while_add(b, a);
    }
}


int main(){
    int num1 = 10;
    int num2 = 8;
    //printf("The sum of %d and %d is %d",num1 , num2 , add(num1 , num2) ); //outputs The sum of 10 and 8 is 18
    printf("The sum of %d and %d is %d",num1 , num2 , add_using_increment_op(num1 , num2) ); //outputs The sum of 10 and 8 is 18
}