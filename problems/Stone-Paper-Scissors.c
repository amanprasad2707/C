#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int a)
{
    srand(time(NULL)); // srand takes seed as a input and is defined inside stdlib.h
    return rand() % a;
}
int main()
{
    char arr[] = {'S', 'P', 'R'};
    char comp, choice;
    char *user = (char *)malloc(8 * sizeof(char));
    int randomNo;
    printf("----------------: Welcome to Scissors Paper Rock Game :----------------\n");
    printf("Enter your name:\n");
    scanf("%s", user);
    getchar();
    for (int i = 0; i < 3; i++)
    {
        randomNo = random(3);
        comp = arr[randomNo];
        printf("Enter your choice:\n");
        printf("Press R for rock\nPress P for paper\nPress S for scissors\n");
        scanf("%c", &choice);
        getchar();
        if (comp == choice)
        {
            printf("Draw!\n");
        }
        else if (comp == 'S' && choice == 'R')
        {
            printf("%s Won this round!\n", user);
        }
        else if (comp == 'P' && choice == 'S')
        {
            printf("%s Won this round!\n", user);
        }
        else if (comp == 'R' && choice == 'P')
        {
            printf("%s Won this round!\n", user);
        }
        else if (comp == 'S' && choice == 'P')
        {
            printf("Computer won this round!\n");
        }
        else if (comp == 'P' && choice == 'R')
        {
            printf("Computer won this round!\n");
        }
        else if (comp == 'R' && choice == 'S')
        {
            printf("Computer won this round!\n");
        }
    }

    return 0;
}