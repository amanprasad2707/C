#include <stdio.h>
int main()
{
    int num = 453;
    int rem, rev = 0;
    printf("Enter number to reverse:-\n");
    // scanf("%d",&num);
    while (num != 0)
    {
        rem = num % 10;  // or num-(num/10)*10
        rev = rev*10 + rem;
        num = num / 10;
    }
    printf("%d",rev);

    return 0;
}