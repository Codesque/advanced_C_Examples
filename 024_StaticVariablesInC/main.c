#include <stdio.h>


int youCalledMe(){
    static int howManyTimesDidYouCallMe = 0;
    howManyTimesDidYouCallMe++;
    return howManyTimesDidYouCallMe;
}

int functionsReturnsNonConstValues(){
    return 5; // as always.
}

int main(){
    youCalledMe();
    youCalledMe();
    youCalledMe();
    printf("%d", youCalledMe()); // outputs : 4

    //static int x = functionsReturnsNonConstValues(); // error: initializer element is not constant
}