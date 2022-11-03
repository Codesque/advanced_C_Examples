#include <stdio.h> 
#include <time.h> // used for "double difftime(time_t time2, time_t time1);" function



int main(){

    time_t time1, time2;

    time(&time1);

    for (int i = 0; i < 5; i++){
        sleep(1);
    }

    time(&time2);
    printf("Difference between %llu and %llu is %0.2f", time2, time1, difftime(time2, time1));
}