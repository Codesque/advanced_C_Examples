#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 



/*
%x = Preferred date representation 
%I = Hour as a decimal number (12-hour clock). 
%M = Minutes in decimal ranging from 00 to 59. 
%p = Either “AM” or “PM” according to the given time value, etc. 
%a = Abbreviated weekday name 

%^a = Abbreviated weekday name in capital letters
%A = Full weekday name 
%b = Abbreviated month name 

%^b = Abbreviated month name in capital letters
%B = Full month name March 
%c = Date and time representation 
%d = Day of the month (01-31) 
%H = Hour in 24h format (00-23) 
%I = Hour in 12h format (01-12) 
%j = Day of the year (001-366) 
%m = Month as a decimal number (01-12) 
%M = Minute (00-59)
*/
int main(){

    time_t t;
    struct tm *tmp ;
    char MY_TIME[50]; 

    time(&t);

    tmp = localtime(&t);
    strftime(MY_TIME, sizeof(MY_TIME), "%x - %I:%M%p", tmp); // %x = mm/dd/yy 
                                                            // %I = HH (Hours)
                                                            // %M = MM (Minutes)
                                                            // %p = A.M or P.M
    printf("formatted time is : %s", MY_TIME);
    return 0; 
}