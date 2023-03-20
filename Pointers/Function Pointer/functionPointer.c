#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
void greet(){
    printf("Hello World my user good morning\n");
}
int main(){
    printf("The sum of two numbers are: %d\n",sum(3,5));  // testing the function
    int (*fPtr) (int, int);     // declaring a function pointer
    fPtr = &sum;   // creating a function pointer
    int d = (*fPtr) (4,5);   // dereferencing a function pointer
    printf("The value of d is: %d\n",d);
    return 0;
}