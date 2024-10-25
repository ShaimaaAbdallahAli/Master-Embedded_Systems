

#include <stdio.h>

int main()
{
	float arr[100];
	int max = 0;
	int i ;
	float sum = 0;
	float Average;

	printf("Enter the number of data : ");
	scanf("%d", &max);

	for (i = 0; i < max; i++)
	{
		printf("%d. Enter number : ", i+1);
		scanf("%f", &arr[i]);
	}

	for (i = 0; i < max; i++)
	{
		sum += arr[i];
	}

	Average = sum / max ;
	printf("Average = %0.2f", Average);

	return 0;
}
