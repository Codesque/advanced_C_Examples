#include <stdio.h> 



// getchar_unlocked is the faster version of getchar . But it is not thread safe.
void usageOf_getchar_unlocked(){
#ifdef WIN32
inline int getchar_unlocked() { return _getchar_nolock(); }
#endif

    char c = getchar_unlocked();
    printf("You are entered : %c", c); 
}

/*
getchar_unlocked is not thread-safe. You can only used it on a multi-threading program which is invoked when invoking thread proccess possess the as after using flockfile() or ftrylockfile();
Also worth mentioning that getchar_unlocked is only defined in POSIX OS. If you use WINDOWS , you need to use _getchar_nolock() function
*/
void usageOf_getchar_unlocked2(){
    
    #ifdef WIN32
    inline int getchar_unlocked() { return _getchar_nolock(); }
    #endif

    char buffer[81] , ch;
    int i;

    for (int i = 0; ((((ch = getchar_unlocked()) != EOF) && (ch != '\n') && (i < 80) )); i++){
        buffer[i] = ch; 
    }

    //DONT FORGET TO BUT NULL AT THE END OF BUFFERS !!!!!
    buffer[81] = '\0'; 
    printf("I texted :::::: %s", buffer);
}


int main(){

    //usageOf_getchar_unlocked();
    usageOf_getchar_unlocked2();
}