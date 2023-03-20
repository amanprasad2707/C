#include <stdio.h>
/*
           *
          **
         ***
        ****
       *****
      ******
     *******
    ********
   *********
  **********
*/
int main()
{
    int num;
    int row = 0, col = 0;
    printf("Enter number:-\n");
    scanf("%d", &num);
    col = num-1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((i+j) >= (num-1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}