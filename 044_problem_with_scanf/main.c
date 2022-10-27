#include <stdio.h>
#include <string.h>

// Buffer filled with "\n" because of scanf. When you got the new buffer , reading the new item is ignored because of the "\n" that buffer currently has
void bufferProblem_causedBy_scanf(){
    int x = 10;
    char str[100];
    scanf("%d", &x);

    //fgets function stops reading the input when : 1.Reads EOF 2.reads \n 3.after reading the character that is before \n   
    fgets(str, 100, stdin); // input : 10
    printf("x = %d , str = %s", x, str);  // output :   [ x = 10 , str = ]
}

// sometimes prints the "Please enter an input :" message twice.
void scanf_within_while_loop(){

    printf("Please enter q to exit");
    char str[100];
    while(((scanf("%s",&str)) == 1) && ((strcmp(str , "q") != 0))) {printf("Please enter an input :");} 

}

// gives 0 errors
void scanf_within_dowhile_loop(){
    char str[100];
    printf("Please enter q to exit\n");
    do{printf("Please enter an input :");} while (((scanf("%s", &str)) == 1) && ((strcmp(str, "q") != 0)));
}

void pretend_the_buffer_problem1(){
    printf("Please enter q to exit");
    char str[100];


    // instead of using "%s" , use "%s\n"  or "%s " 
    while(((scanf("%s\n",&str)) == 1) && ((strcmp(str , "q") != 0))) {printf("Please enter an input :");} 
    //while(((scanf("%s ",&str)) == 1) && ((strcmp(str , "q") != 0))) {printf("Please enter an input :");} 
}

void pretend_the_buffer_problem2(){
    char buffer[100];
    char exit = {'q'};
    for (int i = 0; i < 100; i++){

        printf("Please Enter an input :");
        scanf("%c", &buffer[i]); 

        if (buffer[i] ==  exit){ // we can compare chars like this but we cant compare strings with aritmetic operators in C
            break;
        }
        getchar();// this will pretend the buffer error.

    }
}


int main(){
    //bufferProblem_causedBy_scanf();
    //scanf_within_while_loop(); // input : Please enter an input :Please enter an input : a; // output : *
    //pretend_the_buffer_problem1();
    pretend_the_buffer_problem2();
}