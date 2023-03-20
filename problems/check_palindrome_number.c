#include<stdio.h>
int checkPalindrome(int num){
    int reversed = 0;
    int originalNumber = num;
    while (num!=0)
    {
        // Let's reverse the number
        reversed = reversed*10 + num%10;
        num /= 10;
    }
    printf("reversed number is %d\n",reversed);
    printf("original number is %d\n",originalNumber);
    if (originalNumber == reversed)
    {
        return 1;
    }
    else
return 0;    
}
int main(){
    int num;
    printf("Enter number to check palindrome\n");
    scanf("%d",&num);
    if (checkPalindrome(num))
    {
        printf("Palindrome..\n");
    }
    else{
        printf("Not palindrome..\n");
    }
    
    

    return 0;
}