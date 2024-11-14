#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30
void bubbleSort(int array[], int size);

int Header_15() //6.11(a)
{
	int data[SIZE];
	int i;

	// 初始化隨機數生成器
	srand(time(NULL));

	// 生成隨機數填充陣列
	for (i = 0; i < SIZE; i++)
	{
		data[i] = rand() % 1000; // 產生 0 到 999 的隨機數
	}

	printf("排序前的陣列：\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

	// 呼叫冒泡排序函數
	bubbleSort(data, SIZE);

	printf("\n排序後的陣列：\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}

void bubbleSort(int array[], int size) //6.11(a)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++)
	{
		// 每次迭代，內層循環的範圍減少
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				// 交換元素
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

