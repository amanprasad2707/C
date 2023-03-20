#include<stdio.h>
int main(){
    int rem, num;
    int arr[100];
    int i=0;
    printf("Enter number to convert into binary:-\n");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("%d",0);
    }
    
    while (num)
    {
        rem = num%2;
        num = num/2;
        arr[i] = rem;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        printf("%d",arr[j]);
    }
    
    
    return 0;
}