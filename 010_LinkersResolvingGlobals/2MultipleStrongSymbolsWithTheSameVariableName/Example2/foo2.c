int x = 12345; // Assembler exports it as STRONG with the name 'x'
int main(){
    /*
    C:\Users\ADEMBE~1\AppData\Local\Temp\ccrGTb0X.o:bar2.c:(.data+0x0): multiple definition of `x'
    C:\Users\ADEMBE~1\AppData\Local\Temp\ccWjUHXj.o:foo2.c:(.data+0x0): first defined here
    collect2.exe: error: ld returned 1 exit status
    */
    return 0;
} 
