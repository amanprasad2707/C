#include<stdio.h>
void func2(int *array){
    for(int i=0; i<7;i++){
        printf("Value at index %d is %d\n",i,*(array+i));
        // printf("Value at index %d is %d\n",i, array[i]);  // we can also use this
    }
    *(array) = 12; // very important point that if we change any value here it's get reflected in main()
}


int main(){
    int arr[] = {2,3,5,6,7,8,9};
    func2(arr);
    printf("\n\n");
    printf("Value at index 0 is %d",arr[0]);   
    return 0;
}