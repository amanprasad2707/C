// find the length of a string
#include<stdio.h>
int strlen(char str[]){
    int length=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        length++;
    }
    return length;
}


int main(){
    char str[] = "hello world";
    printf("The length of the string is %d\n",strlen(str));
    
    return 0;
}