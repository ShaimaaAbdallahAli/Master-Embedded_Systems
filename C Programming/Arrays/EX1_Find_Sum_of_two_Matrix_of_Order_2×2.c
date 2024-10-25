#include <stdio.h>

int main()
{
	float a [2][2];
	float b [2][2];
	float result;
	int i,j;

	/* Enter values of matrix a */
	printf("Enter the element of 1st matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);

			scanf("%f", &a[i][j]);
		}
	}

	/* Enter values of matrix b */
	printf("Enter the element of 2nd matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter b[%d][%d] : ", i, j);

			scanf("%f", &b[i][j]);
		}
	}

	/*Calculation of sum of matrix*/
	printf("\nSum Of Matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			result = a[i][j] + b[i][j];
			printf("%.1f ", result);
		}
		printf("\n");
	}
	return 0;
}

