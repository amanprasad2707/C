#include<stdio.h>
void printStr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

}
int main(){
    // char str[] = {'A','m','a','n','\0'};
    // char str[] = "Aman";
    char str[54];
    printf("Enter your name..\n");
    gets(str);
    printf("Using custom function..\n");
    printStr(str);
    printf("\n");
    printf("Using puts..\n");
    puts(str);
    printf("Using scanf..\n");
    printf("%s",str);
    return 0;
}