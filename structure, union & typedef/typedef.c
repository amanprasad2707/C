#include<stdio.h>
int main(){
    typedef int* intptr;
    // int* a, b;
    intptr  a,b;
    int c =33;
    a = &c;
    b = &c;
    return 0;
}