#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num;
    int fact = 1;
    printf("Enter number:-\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial is %d\n", fact);

    printf("%d", factorial(num));

    return 0;
}