#include <stdio.h> 

/*
PS C:> gcc main.c -o notoptimized -save-temps
PS C:> ./notoptimized.exe
3.140000
100.000000
*/
void not_optimized_execution(){
    const float PI = 3.14;
    float *ptr = &PI; 
    printf("%f\n", PI);

    *ptr = 100;
    printf("%f\n", PI); 

} 

/*
PS C:> gcc -O3 main.c -o optimized -save-temps
PS C:> ./optimized.exe
3.140000
3.140000
*/
void optimized_execution(){
    const float PI = 3.14;
    float *ptr = &PI; 
    printf("%f\n", PI);

    *ptr = 100;
    printf("%f\n", PI); 

}



int main(){

    not_optimized_execution();
    optimized_execution();

    /*
    While optimizing , the change of constants are ignored due to optimizition purposes by compiler. 
    We can pretend this by using volatile qualifier. Which tells our compiler to not to optimize this identifier.
    */
}