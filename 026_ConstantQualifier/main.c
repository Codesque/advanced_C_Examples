#include <stdio.h> 

int main(){

    // pointer to variable
    int x = 10;
    int y = 20;
    int *ptr0 = &x;

        // pointer is pointing to another variable
        ptr0 = &y; 

        // changing the value which stored in a pointer
        *ptr0 = 100;

    // pointer to constants

        int i = 0;
        int j = 1;
        const int *ptr1 = &i; 
        // POSTFIX : ptr1 * const int : A pointer to integer which is stored as constant.
        // value of *ptr1 is stored in a read-only part of memory.

        //*ptr1 = 100; // You can not change the value which is stored on the (pointer to constant)

        int const q = 10;
        int p = 100;
        int const *ptr2 = &q;
        // POSTFIX : ptr2 * int const : A pointer to integer constant
        ptr2 = &p; // You can change address of a constant because of UP QUALIFICATION
        /*
        This is called 'down qualification' . y has cons int . But to assing to the integer pointer , it needs to down qualifie itself to only
        int y;
        Constant variable y is stored in the read-only memory part. If we could change the (ptr1 = &y) , with the help of ptr1 , we also could
        have been change the value which is in read-only part of memory. That is why it is invalid.
        */

        //*ptr2 = 100; error 
        // NOTE : pointer to constant or pointer to integer constant's addresses can always be changed but their value cant changed

    // pointer to integer as changing the value to constant

        int a = 101;
        int const cons_a = 10;
        int *ptr3 = &a;

        ptr3 = &cons_a; // gives error in c++ , gives warning in c because of down qualification.  


    // constant pointer to a variable

        int *const ptr4; // constant pointer to an integer value POSTFIX : (const ptr3) * int
        *ptr4 = 100; //valid
        //ptr4 = &a; // error : a constant pointer's address can not be changed 

    // constant pointer to a constant variable

        const int xyz = 100;
        const int zyx = 1;
        const int *const ptr5 = &xyz; // Both pointer's address and the value of the address that lies on the pointer is in read-only
        // part of the memory.

        //*ptr5 = 102; // error
        //ptr5 = &a; //error
        //*ptr5 = zyx; //error
        //ptr5 = &zyx; //error
}