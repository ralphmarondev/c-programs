#include <stdio.h>

int main()
{
	int n, i, e;

	printf("Enter n: ");
	scanf("%d", &n);

	int num[n];
	printf("Enter values of array...\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &e);
		num[i] = e;
	}

	printf("Values of array are...\n");
	for (i = 0; i < n; i++)
		printf("%d ", num[i]); // may space dito ha
	return 0;
}