#include <stdio.h>
#include <stdlib.h>

int Header_1(void)
{
	int n[10];
	int i;

	for (i = 0;i <10;i++)
	{
		n[i] = 0;
	}

	printf("%s%13s\n", "Element", "Value");

	for (i = 0;i < 10;i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}
	system("pause");
	return 0;
}