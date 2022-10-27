#include <stdio.h>
int main(){ 

    // unsigned int :
    int a = 89U; 

    // long int :
    long int b = 99998L;

    char c = 'c'; // In c , chars also associated with the number values. 
    printf("number of %d is equals to %c ", ++c , c );

    //floating numbers : 
    float d = 9.0f;  

    //double numbers = long floats :
    double e = 123123123123.0;
    printf("%lf", e);  

    // long long int :
    printf("%lld", e); 

    // unsigned long long int :
    printf("%llu", e); 
    
}