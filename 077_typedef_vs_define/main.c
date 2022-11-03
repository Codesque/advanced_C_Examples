#include <stdio.h> 
#include <stdlib.h> 

#define token2Str(a) #a
#define fmt "sizeof(%s) = %zu\n" 
//#define 1 'ONE' //error: macro name must be an identifier

int main(){

    typedef char *ptr; 
    #define PTR char*

    ptr x, y, z; // This is expanded like : char *x , *y , *z; 
    PTR a, b, c; // Because the defining is just basicly copy-pasting , the expansion would be like : char *a , b , c

    printf(fmt, token2Str(x), sizeof(x));
    printf(fmt, token2Str(y), sizeof(y));
    printf(fmt, token2Str(z), sizeof(z)); 
    printf(fmt, token2Str(a), sizeof(a)); 
    printf(fmt, token2Str(b), sizeof(b)); 
    printf(fmt, token2Str(c), sizeof(c)); 
    /*OUTPUT : 
    sizeof(x) = 8
    sizeof(y) = 8
    sizeof(z) = 8
    sizeof(a) = 8
    sizeof(b) = 1
    sizeof(c) = 1
    */
}