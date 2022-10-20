void swap(); // function = Assembler exports it as STRONG
int buf[2] = {1, 2};  // global + initialised = Assembler exports it as STRONG 
int main(){ // function = Assembler exports it as STRONG 
    swap();
    return 0;
}

