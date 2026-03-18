#include <stdio.h>

int main()
{
	int grade;

	printf("Enter your grade: ");
	scanf("%d", &grade);

	if (grade >= 90 && grade <= 100)
	{
		printf("Remark: Excellent\n");
	}
	else if (grade >= 80)
	{
		printf("Remark: Very Good\n");
	}
	else if (grade >= 70)
	{
		printf("Remark: Good\n");
	}
	else if (grade >= 60)
	{
		printf("Remark: Fair\n");
	}
	else
	{
		printf("Remark: Failed\n");
	}

	return 0;
}