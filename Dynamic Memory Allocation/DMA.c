#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create..\n");
    scanf("%d",&n);
    // use of malloc
    /*
    ptr = (int*) malloc(n* sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d\n",i,ptr[i]);

    }

*/

    // use of calloc

    ptr = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d\n",i,ptr[i]);

    }


// use of realloc
    printf("Enter the size of the new array you want to create..\n");
    scanf("%d",&n);
    ptr = (int*) realloc(ptr,n* sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value at index %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at index %d is %d\n",i,ptr[i]);

    }
    free(ptr);
    return 0;

}