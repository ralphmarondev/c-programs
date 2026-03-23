#include <stdio.h>
#define SIZE_OF_ARRAY 5 // this is a constant
												// little ones

int main()
{
	float grades[SIZE_OF_ARRAY];
	int i;
	float temp, average, sum = 0;
	float min = 0, max = 0;

	printf("Enter your grades...\n");
	for (i = 0; i < SIZE_OF_ARRAY; i++)
	{
		scanf("%f", &temp);
		grades[i] = temp;
		sum += temp;
	}
	average = sum / SIZE_OF_ARRAY;
	printf("Average: %.2f\n", average);

	printf("Finding nemo...\n");
	for (i = 0; i < SIZE_OF_ARRAY; i++)
	{
		if (i == 0)
		{
			min = grades[0];
			max = grades[0];
			continue;
		}
		if (grades[i] > max)
			max = grades[i];
		if (grades[i] < min)
			min = grades[i];
	}
	printf("Min: %.2f\n", min);
	printf("Max: %.2f\n", max);
	return 0;
}