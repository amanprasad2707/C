#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "aman";
    char s2[] = "prasad";
    char s3[34];

    printf("The strcmp for s1, s2 returned:\n%d\n", strcmp(s1,s2));
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printf("String after concatenate is %s\n",strcat(s1,s2));
    printf("String after reverse is %s\n",strrev(s2));

   // s3 = strcat(s1,s2);  // this is not allowed..
   strcpy(s3,strcat(s1,s2));
   printf("String after copy %s\n",s3);
   puts(s3);

    return 0;
}