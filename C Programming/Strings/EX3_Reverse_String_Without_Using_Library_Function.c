#include <stdio.h>
#include <string.h>

int main()
{
	char text[10], revese_text[10];
	int i,j = 0;

	/* Assigning the string */
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(text);

	/* Reversing process */
	for (i = strlen(text); i > 0 ; i--)
	{
		revese_text[j] = text[i-1] ;
		j++ ;
	}

	/* Printing reverse string*/
	printf("Reverse string is : %s", revese_text);
	return 0;
}
