#include <stdio.h>

void displayMenu();
float performOperation(
		float a,
		float b,
		char op);
float getNumber();
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
float mod(int w, int x);

int main()
{
	char operation;
	float first, second;

	displayMenu();
	printf("Choose operation: ");
	scanf("%c", &operation);

	printf("Enter first number: ");
	first = getNumber();

	printf("Enter second number: ");
	second = getNumber();

	float result = performOperation(
			first,
			second,
			operation);

	printf("Result: %.2f", result);
	return 0;
}

void displayMenu()
{
	printf("=== MENU ===\n");
	printf("[+] Addition\n");
	printf("[-] Subtraction\n");
	printf("[*] Multiplication\n");
	printf("[/] Division\n");
	printf("[%%] Modulo\n");
}

float performOperation(
		float a,
		float b,
		char op)
{
	if (op == '+')
		return add(a, b);
	if (op == '-')
		return sub(a, b);
	if (op == '*')
		return mul(a, b);
	if (op == '/')
		return div(a, b);
	if (op == '%')
		return mod((int)a, (int)b);
}

float getNumber()
{
	float n;

	scanf("%f", &n);
	return n;
}

float add(float a, float b)
{
	return a + b;
}

float sub(float a, float b)
{
	return a - b;
}

float mul(float a, float b)
{
	return a * b;
}

float div(float a, float b)
{
	return a / b;
}

float mod(int w, int x)
{
	return w % x;
}