/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("Enter number:-\n");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int size = (n * 2) - 1;
    int start = 0;
    int end = size-1;
    int a[size][size];
    while (n!=0) { 
    for (int i=start; i<=end; i++) {
    for (int j=start; j<=end; j++) {
    if (i==start ||  j == start || i == end || j == end) {
    a[i][j] = n;
    }
    }
    }
    ++start;
    --end;
    --n;
    }
    
    for (int i = 0; i<size; i++) 
    {
    for (int j=0; j<size; j++)
    {
    printf("%d ",a[i][j]);
        
    } 
    printf("\n");
    
    }
    getch();
    return 0;
}
