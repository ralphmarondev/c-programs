#include <stdio.h>

int main()
{
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	// pattern 1
	printf("=== Pattern 1 ===\n");
	int i, j;
	for (i = 1; i <= n; i += 1)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	// pattern 2
	printf("\n\n=== Pattern 2 ===\n");
	for (int i = n; i > 0; i--)
	{
		int z = n;
		for (int j = i; j > 0; j--)
		{
			printf("%d ", z);
			z--;
		}
		printf("\n");
	}

	// pattern 3
	printf("\n\n=== Pattern 3 ===\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}

	// pattern 4
	printf("\n\n=== Pattern 4 ===\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	// pattern 5
	printf("\n\n=== Pattern 5 ===\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
					printf("x ");
				else
					printf("o ");
			}
			else
			{
				if (j % 2 == 0)
					printf("o ");
				else
					printf("x ");
			}
		}
		printf("\n");
	}

	return 0;
}