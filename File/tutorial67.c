#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("myFile.txt","w+");
    /*char c = fgetc(ptr);
    printf("The character I read was: %c\n",c);
    c = fgetc(ptr);
    printf("The character I read was: %c\n",c);*/


    /*char str[34];
    fgets(str,5,ptr);
    printf("The string is: %s\n",str);*/

    fputc('o',ptr);
    fputs("This is Aman",ptr);
    fclose(ptr);
    return 0;
}