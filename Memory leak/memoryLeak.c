#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 55555)
    {
        printf("Welcome to Code With Harry");
        i2 = malloc(55555 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);    // without this we will encounter a situation of memory leak
    }

    return 0;
}