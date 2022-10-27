#include <stdio.h> 
#include <ctype.h> 


int main(){

    char buffer1[100] , buffer2[100] , ch;
    int i = 0;
    ch = _getchar_nolock(); 
    if (isprint(ch)){sprintf(buffer1, "%c is printable\n" , ch); } 
    else {sprintf(buffer1, "%c is not printable\n" , ch);} 
    
    if (iscntrl(ch)){sprintf(buffer2, "%c is a control character" , ch);} 
    else{sprintf(buffer2, "%c is not a control character" , ch); }

    printf("%s%s", buffer1, buffer2);

    
}