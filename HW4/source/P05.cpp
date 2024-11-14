#include <stdio.h>
#include <stdlib.h>

int Header_2(void)
{
	int n[10] = {32,27,64,18,95,14,95,70,60,37};
	int i;

	printf("%s%13s\n", "Element", "Value");

	for (i = 0;i < 10;i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}

	system("pause");
	return 0;
}