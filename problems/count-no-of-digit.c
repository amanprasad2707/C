#include<stdio.h>
int main(){
    int num = 1;
    int count=0;
    while (num!=0)
    {
        num /= 10;
        count++;
    }
    printf("There are %d digits in number",count);
    return 0;
}