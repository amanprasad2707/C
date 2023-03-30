#include <stdio.h>
int power(int n, int m)
{
    int pow = 1;
    for (int i = 0; i < m; i++)
    {
        pow = pow * n;
    }
    return pow;
}
int main()
{
    printf("%d", power(2, 4));
    return 0;
}