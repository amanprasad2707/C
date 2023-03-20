/*
00000000
 1111111
  222222
   33333
    4444
     555
      66
       7
*/
#include<stdio.h>
int main(){
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<=j)
            {
                printf("%d",i);
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}