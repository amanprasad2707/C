#include<stdio.h>
int main(){
    int a = 45;
    float b = 56.5;
    void* ptr;
    ptr = &b;
    // printf("The value of a is %d", *ptr);   we cannot directly dereference void pointers
    printf("The value of b is %f\n",*((float*)ptr));
    ptr = &a;
    printf("The value of a is %d\n",*((int*)ptr));
    return 0;
}