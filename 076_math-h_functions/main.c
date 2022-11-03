#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

#define PI 3.14

void basicOperators(){

    double negNum = -101.0;
    printf("Absolute value of %0.2lf is %0.2lf\n", negNum, fabs(negNum));

    double num = 10.0, divisor = 3.0, reminder;
    printf("%0.2lf , divided by %0.2lf , the reminder is %0.2lf\n", num, divisor, fmod(num, divisor));

    double square = 9.0;
    printf("Square root of %0.2lf is %0.2lf\n", square, sqrt(square));

    double num1 = 42.0;
    printf("%0.2lf to the power of 2 is %0.2lf\n", num1, pow(num1, 2));
   
}

void littleHush2Remember_operators(){

    double aa = 10.0l;
    printf("loge(%0.2lf) = %0.6lf\n",aa, log(aa));

    double bb = 10.0l;
    printf("log10(%0.2lf) = %0.6lf\n", bb, log10(bb));

    double xx = 1.0l;
    printf("e^%0.2f = %0.2lf\t e^%0.2lf = %0.2lf\n", xx, exp(xx), xx + 1, exp(xx + 1));

    double xy = 101.5l;
    printf("Smallest number that is bigger than %0.2lf is %0.2lf\n", xy, ceil(xy));
    printf("Biggest number that is lesser than %0.2lf is %0.2lf\n", xy, floor(xy)); 


}

void hush_operations(){

    // SEPERATING INTEGER AND FRACTION PARTS WITH MODF
    double zz = 10.2l , zz_int , zz_fraction;
    zz_fraction = modf(zz, &zz_int);
    printf("Integer part of %0.2lf is %0.2lf and the fraction part of it is %0.4lf\n", zz, zz_int, zz_fraction);

    // COS FUNCTION
    double degree = 90.0l;
    double degree2radian = PI/180.0 ;
    printf("cosine of %0.2lf is %0.2lf\n", degree, cos(degree * degree2radian));  // cosine of 90.00 is 0.00

    // SIN FUNCTION
    double sin_degree = 90.0l;
    double degree2radian_sinus = PI / 180;
    printf("sin of %0.2lf is %0.2lf\n", sin_degree, sin(sin_degree * degree2radian_sinus));  // sin of 90.00 is 1.00 

    // ACOS FUNCTION
    // acos takes length and returns radians.
    double acos_length = 1.0l;
    double radian2degree = 180.0 / PI;
    printf("acosine of %0.4lf length is %0.4lf degree\n", acos_length, acos(acos_length) * radian2degree); //acosine of 1.0000 length is 0.0000 degree

    //HYPERBOLIC FUNCTIONS 
    // hyperbolic functions takes length and returns radians
    double tanh_length = 1.0l;
    double radian2degree_tanh = 180.0 / PI;
    printf("tanh of %0.4lf length is %0.4lf degree\n", tanh_length, tanh(tanh_length) * radian2degree_tanh); //tanh of 1.0000 length is 43.6583 degree 

}


int main(){
    basicOperators();
    littleHush2Remember_operators();
    hush_operations();
}