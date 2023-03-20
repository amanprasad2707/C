#include<stdio.h>
int main(){
    int num, sum =0;
    printf("Enter the last natural number you want the sum of:\n");
    scanf("%d",&num);
    // Runs in linear time
    /*for (int i = 1; i <= num; i++)
    {
        sum += i;
    }*/
    // Runs in constant time
    sum = num*(num+1)/2;
    printf("The sum of first %d natural number is: %d",num,sum);
    
    return 0;
}