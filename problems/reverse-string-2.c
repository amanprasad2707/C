#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string:-\n");
    gets(str);
    int length=0, i;
    while (str[length]!='\0')
    {
        length++;
    }
    for ( i = 0; i < (length)/2; i++)
    {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
    printf("%s",str);
    
    return 0;
}