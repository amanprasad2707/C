#include<stdio.h>
#include"temp.c"
// int sum=0;   // global variable or external variable
int myfunc(int a, int b){
    // auto int sum;  // and int sum is same 
    extern int sum;
    // sum = a+b;
    return sum;
}
// int sum = 12;
int main(){
    // Declaration: telling the compiler about the variable (no space reserved)
    // Definition: declaration + space reservation
    // int sum = myfunc(3,4);
    register int myVar = 34;
    printf("The sum is %d\n",sum);
    return 0;
}