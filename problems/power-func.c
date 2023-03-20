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
    // int n = 2;
    // int m = 4;
    // int val = 1;
    // for (int i = 0; i < m; i++)
    // {
    //     val = val * n;
    // }
    // printf("%d\n", val);

    return 0;
}