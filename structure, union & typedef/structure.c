#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int rollno;
    float marks;
    char fav_char;
    char name[34];
    
}std;              // harry, ravi, shubham; 
    

int main(){
    // struct Student harry, ravi, shubham;
    std harry, ravi, shubham;
    harry.rollno = 1;
    ravi.rollno = 2;
    shubham.rollno = 3;

    harry.marks = 23;
    ravi.marks = 233;
    shubham.marks = 213;

    strcpy(harry.name,"harry potter");

    printf("The marks of harry is %f\n",harry.marks);
    printf("The full name of harry is %s\n",harry.name);
    return 0;
}