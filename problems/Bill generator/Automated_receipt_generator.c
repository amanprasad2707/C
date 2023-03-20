// you have to fill in values to a template letter.txt
// letter.txt looks something like this:
// thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
// please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.
// you have to read this file and replace these values:
// {{name}} = Aman
// {{item}} = table fan
// {{outlet}} = Ram laxmi fan outlet
// use file functions in C to accomplish the same
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);
    // lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // jump over this word
            i = i + oldWordLength - 1;
        }
    }
    
    // making a new string to fit in the replaced words
    resultString = (char*) malloc(i+ count* (newWordLength - oldWordLength + 1));
    i = 0;
    while (*str)
    {
        // compare the substring with result
        if (strstr(str,oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;

        }
        else{
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
        

    }
    resultString[i] = '\0';
    return resultString;
    

}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    char name[20];
    char item[20];
    printf("Enter customer name:\n");
    gets(name);
    printf("Enter purchased item:\n");
    gets(item);
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);     // reads the data from bill.txt
    printf("The bill templete was: %s\n", str);   // print the data of bill.txt

    // call the replaceWord function and generate new string
    char *newStr;
    newStr = replaceWord(str, "{{item}}",item);
    newStr = replaceWord(newStr, "{{name}}",name);
    newStr = replaceWord(newStr, "{{outlet}}","Ram luxmi fan outlet");
    printf("The actual bill generated is: %s\n", newStr);
    printf("The generated bill has been written to the file genbill.txt\n");
    // fputs(str, ptr2);
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    getch();
    return 0;
}