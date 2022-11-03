#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

#define INFO 1 
#define ERR  2
#define STD_OUT stdout 
#define STD_ERR stderr

/*To use variable-length arguments in a macro , we need to use ##__VAR_ARGS__ and ellipses (...)
Also wort to mention if you use conditional statements like one line by one line it would be zero errors or bugs.
Here is an example how you can use variable length arguments.
*/
#define LOG_MESSAGE(prio, stream, msg, ...) \
    do                                      \
    {                                       \
        char *str;                          \
        if (prio == INFO)   {str = "INFO";}\
        else if (prio == ERR){str = "ERR";}\
        fprintf(stream, "[%s] : %s  : %d  : "msg"\n",\
                str, __FILE__, __LINE__, ##__VA_ARGS__);\
    }while(0)

int main(){
    char *s = "WARNING!";
 
    /* display normal message */
    LOG_MESSAGE(ERR, STD_ERR, "Failed to open file" , ' ');
 
    /* provide string as argument */
    LOG_MESSAGE(INFO, STD_OUT, "%s YOU ARE SO HOT", s);
 
    /* provide integer as arguments */
    LOG_MESSAGE(INFO, STD_OUT, "%d + %d = %d", 10, 20, (10 + 20));
 
    return 0;


}