#include<stdio.h>
#include<string.h>
int main(){
    char mainStr[40] = "This is my first project in C";
    char subStr[50] = "hello";
    char *result;
    result = strstr(mainStr,subStr);
    if (result)
    {
    printf("%s",result);
    }
    else{
        printf("String not found!");
    }
    
    return 0;
}