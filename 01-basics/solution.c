#include <stdio.h>

int main()
{
	char name[100];
	int age;
	float height;

	printf("Enter your full name: ");
	fgets(name, sizeof(name), stdin);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your height (in meters): ");
	scanf("%f", &height);

	printf("\n--- Student Information ---\n");
	printf("Name   : %s", name);
	printf("Age    : %d\n", age);
	printf("Height : %.2f meters\n", height);

	return 0;
}