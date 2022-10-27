#include <stdio.h>

void why_we_need_fflush(){

    char text[100];
    for (int i = 0; i < 2; i++){
        scanf("%[^\n]s", text);
        printf("\n\n%s", text);
    }

}

void avoidingBufferProblem_by_using_multiple_buffers(){
    typedef char text[100];
    text texts[2];

    for (int i = 0; i < 2; i++){
        scanf("%s", texts[i]);
    }

    printf("%s\n%s", texts[0] , texts[1]); 
} 
/*fflush is determined as unspecified behaviour by C standarts. If you want to make your program portable (undependent to compiler and operating system) , dont use it. 

instead you can use other versions that are portable . But they are not included in standart library , so you have to donwload it. 
*/
void usageOf_fflush(){ 
    char text[100];
    for (int i = 0; i < 2; i++){
        scanf("%[^\n]s", text);
        printf("\n\n%s", text);
        //fflush(stdin);
    }
}


int main(){
    //why_we_need_fflush(); // input : Hello Hi 
                          // output : Hello Hello

    usageOf_fflush(); 

} 
