#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int linearSearch(const int array[], int key, int size);

int Header_14(void)
{
	int a[SIZE];
	int x;
	int searchKey;
	int element;

	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}

	printf("Enter integer search key:\n");
	scanf_s("%d", &searchKey);

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}

int linearSearch(const int array[], int key, int size) //P.37
{
	int n;
	for (n = 0; n < size; ++n)
	{
		if (array[n] == key)
		{
			return n;
		}
	}
	return -1;
}
