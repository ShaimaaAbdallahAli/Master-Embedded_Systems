#include <stdio.h>

int main()
{
	char text[100], length = 0;
	int i;

	/* Assigning the string */
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(text);

	/* Calculating length */
	for (i = 0; text[i] != '\0' ; i++)
	{
		length++;
	}

	/* printing the length */
	printf("Length of string : %d", length);

	return 0;
}
