extern int buf[];

int *bufp0 = &buf[0]; // global + initialised = Assembler exports it as STRONG 
int *bufp1; // global + not initialised = Assembler exports it as WEAK

void swap(){
    int temp;

    bufp1 = &buf[1];
    temp = *bufp0;
    *bufp0 = *bufp1;
    *bufp1 = temp; 
}
