#include<stdio.h>
#include<string.h>
union Student
{
    int rollno;
    char fav_char;
    float marks;
    char name[45];
};

int main(){
    union Student S1;
    S1.rollno = 34;
    S1.marks = 34.5;
    S1.fav_char = 'v';
    strcpy(S1.name, "Aman Prasad");

    printf("The name is %s\n",S1.name);
    printf("The marks is %f\n",S1.marks);
    printf("The rollno is %d\n",S1.rollno);
    printf("The fav_char is %c\n",S1.fav_char);
    
    return 0;
}