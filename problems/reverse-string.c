#include <stdio.h>
int main() {
	char str[100], revstr[100];
	int start = 0, end = 0;

	printf("Enter a string: ");
	// scanf("%[^\n]", str);
	gets(str);

	// count the number of characters
	while (str[end] != '\0')
		end++;

	// backward assignment, starting from the last character
	while (end > 0) {
		revstr[start] = str[end-1];
		end--;
		start++;
	}

	revstr[start] = '\0';

	printf("The reversed string is: %s", revstr);

	return 0;
}