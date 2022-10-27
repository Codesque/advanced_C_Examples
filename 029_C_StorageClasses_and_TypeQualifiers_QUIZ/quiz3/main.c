#include <stdio.h>
// you can multiply define your datatype from a literal without a complation error.
void multiple_typedefs(){
    typedef int INT, *INTPTR, ONEDARR[10], TWODARR[10][10];
    INT x = 5;
    INTPTR ptr0 = &x;
    INTPTR *ptr2ptr = &ptr0;
    ONEDARR arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    TWODARR arr2d;
    for (int i = 0; i < 10;i++){
        for (int j = 0; j < 10; j++){
            arr2d[i][j] = arr[j];
        }
    }
}

void executing_multipleFunctions_with_comma(){
    auto void myFunc();
    void myFunc(){
        static int x = 0;
        printf("%d" , ++x );
    };

    myFunc(), myFunc(), myFunc();
}

int main(){

    multiple_typedefs(); // compiles successfully
    executing_multipleFunctions_with_comma(); //compiles successfully 
    
}