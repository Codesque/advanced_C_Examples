#include <stdio.h> 
#include <ctype.h> 


int main(){

    printf("All the graphical characters are :\t");
    for (int i = 0 ; i < 127 ;i++){
        if(isgraph(i)){
            printf("%c\t", i);
            /*OUTPUT
            All the graphical characters are :      !       "       #       $       %       &       '       (       )       *      
            +       ,       -      ./       0       1       2       3       4       5       6       7       8       9       :       
            ;       <       =       >       ?       @       A       B       C       D       E       F       G       H       I       
            J       K       L       M       N       O       P       Q       R       S      TU       V       W       X       Y       
            Z       [       \       ]       ^       _       `       a       b       c       d       e       f       g       h       
            i       j       k       l       m       n       o       p       q       r       s       t       u       v       w       
            x       y       z       {       |       }       ~
            
            */
        }
    }
}