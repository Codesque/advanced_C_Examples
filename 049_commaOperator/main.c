#include <stdio.h> 


// while using comma identifier as a seperator instead of operator , you need to consider ltr associativity rules. 
void comma_with_associativity(){
    int a;
    a = 2, 3, 4; // this expression expanded as (a=2),3,4 because of associativity.
    printf("\n%d\n", a);
}


int x = 0;
/*Instead of using comma as a seperator , if you use it as a operator like (x,y) , both of x and y are evaluated as ltr. After that 
the last(rightest) value is returned.(x,y) ====> y returned*/
void using_comma_as_an_operator(){
    auto int f1(), f2(); 
    int f1(){
        x = 5;
        return x;
    }; 
    int f2(){
        x = 10;
        return x;
    };

    int b , c;
    b = (2, 3);
    c = (f1(), f2());// f1 is called and evaluated. f2 is called and evaluated. the rightest value within the brackets is returned
    printf("\nb:%d  ,   c:%d\n", b , c);
}

int main(){

    //comma_with_associativity(); // outputs : 2;
    using_comma_as_an_operator(); // outputs : b:3  ,   c:10 
}