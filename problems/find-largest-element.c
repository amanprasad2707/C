#include<stdio.h>
int main(){
    int arr[] = {45,32,67,12,95,55,43,65,14,51,34};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    // printf("The size of an array is: %d\n",size);
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    printf("Maximum number in an array is: %d\n",max);
    
    return 0;
}