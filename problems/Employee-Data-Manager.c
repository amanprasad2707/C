/*
Dynamic Memory Allocation
ABC pvt Ltd. manages employee records of other companies
Employee id can be of any length and it can contain any character
for 3 employees,
you have to take 'lenght of employee id' as input in a length integer variable
Then, you have to take employee id as an input and display it on screen
Store the employee id in a character array which is allocated dynamically
you have to create only one character array dynamically
for example:
employee 1
enter the characters in your id
45
dynamically allocate the character array
take input from user
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 1;
    while (i < 4)
    {
        int n, a, b;
        printf("Employee:%d Enter the number of characters in your employee ID :\n",i);
        scanf("%d", &n);
        getchar();
        printf("Enter the value of a:\n");
        scanf("%d",&a);
        getchar();
        printf("Enter the value of b:\n");
        scanf("%d",&b);
        getchar();
        char *ptr = (char *)malloc(n+1 * sizeof(char));
        printf("Enter your employee ID\n");
        scanf("%s", ptr);
        printf("The employee ID is: %s\n", ptr);
        free(ptr);
        i++;
    }

    return 0;
}