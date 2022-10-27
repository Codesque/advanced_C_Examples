#include <stdio.h> 
#include <stdlib.h> 

void homemade_fflush(){
    while((getchar()) != '\n');
}
/*In terminal 
Your name is Adam //Entered
Your surname is Yuksel //Entered
Your age is 21 //Entered

Hello welcome to my personal program Adam Yuksel //Exposed as Output

*/
void scanfExample_1(){

    char name[100], surname[100], age[100];
    scanf("Your name is %s", &name);
    homemade_fflush();
    scanf("Your surname is %s" , &surname);
    homemade_fflush();
    scanf("Your age is %s", age);

    printf("\nHello welcome to my personal program %s %s\n", name, surname);
}

// "*" operator before specifier (d in the %d , s in the %s ...) excludes this datatype from input until the next character except next char that being a new line or space. 
void scanfExample_2(){
    int input;
    scanf("%*s %d" , &input);
    homemade_fflush();
    printf("\n\ninteger %d entered by user\n\n", input);

    /* Experiment 1 
    input : jhasjdsguasgasgasıuhsaıuhasdouhsadıuahsıudsaıasgh 12
    output : integer 12 entered by user
    */
    /*Experiment 2 
    input : kjasbıdusbhıashbıusahıashsaıduh                                                         65 
    output : integer 65 entered by user
    */
}

/*
fscanf is used for reading files which has a specific format. 
*/
void usageOf_fscanf(){

    while(1){
        static int i = 0;
        FILE *fptr = fopen("info.txt", "r");  
        if ((fptr == NULL) && (i != 3)){
            
            FILE *fptr = fopen("info.txt", "w");
            fprintf(fptr , "NAME\t\t\tAGE\t\t\tCITY\n");
            fprintf(fptr, "Adem\t\t\t21\t\t\tBursa\n");
            fprintf(fptr, "Furkan\t\t\t21\t\t\tEskisehir\n");
            fprintf(fptr, "Buse\t\t\t32\t\t\tIstanbul\n");

            fclose(fptr);
            i++;
            continue;
        }

        char buff[100];
        while(fscanf(fptr , "%*s %*s %s" , buff) == 1){
            printf("%s", buff);
            homemade_fflush(); 

        }
        break;
    }
     

    
}

void usageOf_fread(){

    struct threeNum{
        int num1;
        int num2;
        int num3;
    };

    struct threeNum num;
    while(1){

        FILE *fptr = fopen("numbers.bin" , "rb"); 
        if (fptr == NULL){

            int x = 1, y = 5, z = 6; 

            FILE *fptr = fopen("numbers.bin", "wb");
            fprintf(fptr , "N1\t\tN2\t\tN3\n");
            fprintf(fptr, "%d\t\t%d\t\t%d\n" , x , y , z); 
            fprintf(fptr, "%d\t\t%d\t\t%d\n" , 2*x , 2*y , 2*y+1);
            fprintf(fptr, "%d\t\t%d\t\t%d\n"  , 3*x , 3*y , 3*y+1); 
            fprintf(fptr, "%d\t\t%d\t\t%d\n"  , 4*x , 4*y , 4*y+1);
            fclose(fptr);
            continue;
        }

        for (int i = 1; i < 5; ++i){
            fread(&num, sizeof(struct threeNum), 1, fptr);
            homemade_fflush();
            printf("n1:%d\t\tn2:%d\t\tn3:%d\n", num.num1, num.num2, num.num3); 
        }

        fclose(fptr);
        break;
    }
}


int main(){
    //scanfExample_1();
    //scanfExample_2();
    
    //usageOf_fscanf();
    /*OUTPUT :
    CITY
    Bursa
    Eskisehir
    Istanbul    
    */

    usageOf_fread();
}