#include <stdio.h>

int main()
{
	// size = 36
	int arr[] =
			{1, 3, 4, 2, 7, 6, 5, 9, 14, 18,
			 20, 22, 24, 29, 30, 31, 32, 8, 10, 16,
			 33, 11, 34, 35, 36, 28, 27, 26, 25, 23,
			 13, 17, 19, 21, 15, 12};
	int size = sizeof(arr) / sizeof(arr[0]);
	// size = 36
	for (int i = 1; i < size; i += 3)
	{
		// i = 34
		printf("%d ", arr[i]);
		// arr[1], arr[4], arr[7], arr[10]
		// arr[13], arr[16], arr[19], arr[22], arr[25],
		// arr[28], arr[31], arr[34]
		if (i == 2 || i == 4)
			continue;
		if (i == 6 && i == 8) // 0 && 0 = 0
			continue;
		if (i == 3 || i == 24)
			break;
	}

	return 0;
}