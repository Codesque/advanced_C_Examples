#define CRASH() do{\
    ((void(*)())0)(); \ // 0 is casted to a function that takes void arguments and returns a void pointer. 
}while(0) 

int main(){
    CRASH(); // This macro will try to access a code which stored at location 0 of the memory. 
    // This will throw an error
}