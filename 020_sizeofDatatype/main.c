#include <stdio.h>  
#include <stdlib.h>

/*
size_t is a datatype like long. As you know size of long datatype is compiler-dependent. Size_t also has the same principle. 
In 32 bit compilers , the size of size_t equals to unsigned int. 
In 64 bit compilers , the size of size_t equals to unsigned long long.  

These standart libraries includes size_t :
<stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, <time.h>, <wchar.h> 

main usage of size_t datatype is the define the return value of 'sizeof' operator.Thus , it is used in functions like : 
malloc , memcpy , strlen ... 

If you ask why there is something exists like that ? Well because the amounth of memory that you are gonna allocate must be positive.
*/
int main(){

    void *malloc(size_t n) ; //n is the maximum amounth of memory that the object can allocate

    void *memcpy(void *s1, void *s2, size_t n); // memcpy copies n bytes from s2 to s1.

    size_t strlen(char const *s); // minimum length of a string is 0; 

    /*
    size_t objects can never be negative. Thus be aware while using size_t objects in a for/while loop. Always make the loop with addition 
    operation. Subtracting loops are bug prone if you are using size_t object in a for-while loop.
    */

    size_t gonna_be_negative = 10;
    for (gonna_be_negative; gonna_be_negative >= 0; --gonna_be_negative){
        printf("%u\n", gonna_be_negative); 
        if (gonna_be_negative == -1){ // If you delete the if condition , there will be an infinite loop because wheter it becomes -1 for
        // integer datatype , it is a unsigned integer at the end of the day.  it becomes the maximum unsigned value when goes back from 0.
            printf("At the end of for loop , gonna_be_negative becomes :%u", gonna_be_negative);
            break;
        }
    }
     
    return 0;
}