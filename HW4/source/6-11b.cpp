#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

void optimizedBubbleSort(int array[], int size);

int Header_16() //6.11(b)
{
	int data[SIZE];
	int i;

	// 初始化隨機數生成器
	srand(time(NULL));

	// 生成接近排序的陣列
	for (i = 0; i < SIZE; i++)
	{
		data[i] = i;
	}

	// 打亂少量元素，模擬接近排序的情況
	for (i = 0; i < 5; i++)
	{
		int index1 = rand() % SIZE;
		int index2 = rand() % SIZE;
		int temp = data[index1];
		data[index1] = data[index2];
		data[index2] = temp;
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

	// 呼叫改進的冒泡排序函數
	optimizedBubbleSort(data, SIZE);

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

void optimizedBubbleSort(int array[], int size) //6.11(b)
{
	int i, j, temp;
	int swapped;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; // 初始化交換標誌
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				// 交換元素
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; // 標記發生交換
			}
		}
		if (swapped == 0)
		{
			// 如果沒有交換，提早結束排序
			break;
		}
	}
}