#include <stdio.h> 
#include <stdlib.h> 

// this code gives zero error but cant be executed
void orderOf_logicalOps_are_significant(){

    typedef struct dataType{
        void *Next;
    
    }dtype;

    dtype *pTemp;
    (pTemp->Next) = NULL ;
    while (pTemp && pTemp->Next){ // ptemp is not null . So the first statement is true for and operator.
    // The second operand is not controlled because of and operator is not exactly same with the logical maths.
        printf("Error , this suppose not to work because Next is NULL");
        break;
    } 

}




int main(){
    orderOf_logicalOps_are_significant();
}