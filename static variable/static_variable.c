#include <stdio.h>
int b = 45; // This is a global variable
int func1(int b1)
{
    static int myvar = 12; // static variable initialize from zero it does not contain any garbage value
    // static variable does not accept any func() it only accepts const. val
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The address of b inside func1 is %d\n",&b);
    // printf("The value of b inside func1 is %d\n",b);
    return b1 + myvar;
}
int main()
{
    int b = 3; // This is a local variable
    // printf("The address of b inside main is %d\n",&b);
    // printf("The value of b inside main is %d\n",b);
    int val = func1(b);
    val = func1(b);
    // int *ptr = &val;
    printf("The return value of func1 is %d", func1(b));
    // printf("the value of func1 is %d\n",val);
    return 0;
}