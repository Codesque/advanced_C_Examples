#include <stdio.h> 
#include <stdlib.h>


/*
sizeOf is a compile time operator . Compile time refers to time that is spent for converting the given source code to binary code. 
Thus , the expression which is given within the sizeOf's brackets , is not executed , just compiled. 
*/
void whatIs_sizeOf(){

    int x = 11;
    int y = sizeof(x++); // the expression within the brackets doesnt execute. Just turned the x++ source code to binary code
    printf("%d , %d\n", x, y); // y is the number that returned by the sizeOf operator , which represents the bytes that datatype of y  allocated
}

void findNumberOfElements_with_sizeOf(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("%lu\n", (size_t)sizeof(arr) / sizeof(arr[0]));
}

void dynamicMemoryAllocation_with_sizeOf(){

    int *ptr = (int*) malloc( 10 *sizeof(int)) ;

}

void sizeOf_without_brackets(){
    int x = 10;
    int y = 5;
    printf("%u\n", sizeof x + y ); // returns something weird.
}

int main(){

    whatIs_sizeOf();// outputs : 11 , 4
    findNumberOfElements_with_sizeOf(); // outputs : 10
    dynamicMemoryAllocation_with_sizeOf();
    sizeOf_without_brackets();
}