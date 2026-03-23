// ACTIVITY :)
// WHEN THE NUMBER IS PRINTED,
// THE STUDENT HOLDING THE NUMBER
// MUST GO INFRONT.
#include <stdio.h>
#define SIZE 25

int main()
{
	int num[] = {
			5, 7, 8,
			9, 2, 6,
			12, 14, 10,
			11, 3, 1,
			101,
			102, 103, 105,
			104, 106, 107,
			2001, 1779,
			1200, 1345,
			1415,
			5145};
	// SIZE = 25
	for (int i = 0; i < SIZE - 1; i += 2)
	{
		printf("%d ", num[i]);
		if (i == 2 || i == 4 || i == 6)
			continue;
		if (i == 8 && i == 10)
			break;
		if (i == 20 || i == 18)
			continue;
	}
	return 0;
}