#include<stdio.h>
int main(){
    FILE * ptr = NULL;
    char str[64] = "This content was produced by tutorial64.c";
    // *********** Writting a file **********
    ptr = fopen("myFile.txt","w");
    fprintf(ptr,"%s",str);

    //  ********** Reading a file **********
    ptr = fopen("myFile.txt","r");
    fscanf(ptr, "%s", str);
    printf("The content of this file has\n %s",str);
    return 0;
}