/*
*********
********
*******
******
*****
****
***
**
*
*/

#include<stdio.h>
int main(){
    int i, j, row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (i = row; i>=1; i--){
        for (j = i; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}