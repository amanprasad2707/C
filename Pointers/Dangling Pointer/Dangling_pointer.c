#include<stdio.h>
#include<stdlib.h>
int* functionDangling(){
    int a, b, sum;
    a = 34;
    b = 45;
    sum = a+b;
    return &sum;
}
int main(){
    // case 1: deacllocation of a memory block
    int *ptr = (int*) malloc(7 * sizeof(int));
    ptr[0] = 45;
    ptr[1] = 85;
    ptr[2] = 15;
    ptr[3] = 35;
    free(ptr);  // ptr is now a dangling pointer

    // case 2: function returning local variable address
    int* dangPtr = functionDangling(); // dangPtr is now a dangling pointer

    // case 3: if a variable goes out of scope
    int* danglingptr3;
    {
        int a = 23;
        danglingptr3 = &a;
    }
    // here variable a goes out of scope which means danglingptr3 is pointing to a location which is freed and danglingptr3 is now a dangling pointer
    
    return 0;
}