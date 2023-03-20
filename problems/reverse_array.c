#include<stdio.h>
/*int main(){
    int arr[] = {1,2,3,4,5};
    int revarr[6];
    for(int i=0,j=4; arr[i]!='\0'; i++,j--)
    {
        revarr[j] = arr[i];
        
    }

    for (int i = 0; i<=4; i++)
    {
        printf("%d\n",revarr[i]);
    }
    
    return 0;
}*/
void revarr(int arr[]){
    for (int i = 0; i < 8/2; i++)
    {
        int temp;
    // swap item arr[i] with arr[7-i]
    temp = arr[i];
    arr[i] = arr[7-i];
    arr[7-i] = temp;
    }
}
void printarr(int arr[]){
    for (int i = 0; i < 8; i++)
    {
        printf("The value at index %d is: %d\n", i , arr[i]);
    }
}
int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    printf("\nBefore reversing the array..\n");
    printarr(arr);
    revarr(arr);
    printf("\nAfter reversing the array..\n");
    printarr(arr);
}