#include <stdio.h>

struct Ballpen
{
	float length;
	char color[10];
	char brand[10];
	float price;
	int quantity;
};

int main()
{
	struct Ballpen b1, b2;

	printf("Enter properties for ballpen 1...\n");
	printf("Enter length: ");
	scanf("%f", &b1.length);

	printf("Enter price: ");
	scanf("%f", &b1.price);

	printf("Enter quantity: ");
	scanf("%d", &b1.quantity);

	printf("Enter color: ");
	scanf("%s", b1.color);

	printf("Enter brand: ");
	scanf("%s", b1.brand);

	printf("Enter properties for ballpen 2...\n");
	printf("Enter length: ");
	scanf("%f", &b2.length);

	printf("Enter price: ");
	scanf("%f", &b2.price);

	printf("Enter quantity: ");
	scanf("%d", &b2.quantity);

	printf("Enter color: ");
	scanf("%s", b2.color);

	printf("Enter brand: ");
	scanf("%s", b2.brand);

	printf("=== Ballpen 1 ===\n");
	printf("Length: %.2f\n", b1.length);
	printf("Price: %.2f\n", b1.price);
	printf("Quantity: %d\n", b1.quantity);
	printf("Color: %s\n", b1.color);
	printf("Brand: %s\n", b1.brand);

	printf("=== Ballpen 2 ===\n");
	printf("Length: %.2f\n", b2.length);
	printf("Price: %.2f\n", b2.price);
	printf("Quantity: %d\n", b2.quantity);
	printf("Color: %s\n", b2.color);
	printf("Brand: %s\n", b2.brand);
	return 0;
}

/*
=== Ballpen 1 ===
Length: 80
Price: 24
Quantity: 2

=== Ballpen 2 ===
Length: 82
Price: 24
Quantity: 5
*/