#include <stdio.h>
#include "example.h"

extern int global_foo;
static int local_bar = 0;
int local_foo;

int main(){
    printf("globalfoo:%d , local_bar:%d\n", global_foo, local_bar);  
    printf("localfoo:%d",local_foo); 
}
