#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

void optimizedBubbleSort(int array[], int size);

int Header_16() //6.11(b)
{
	int data[SIZE];
	int i;

	// ��l���H���ƥͦ���
	srand(time(NULL));

	// �ͦ�����ƧǪ��}�C
	for (i = 0; i < SIZE; i++)
	{
		data[i] = i;
	}

	// ���äֶq�����A��������ƧǪ����p
	for (i = 0; i < 5; i++)
	{
		int index1 = rand() % SIZE;
		int index2 = rand() % SIZE;
		int temp = data[index1];
		data[index1] = data[index2];
		data[index2] = temp;
	}

	printf("�Ƨǫe���}�C�G\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

	// �I�s��i���_�w�ƧǨ��
	optimizedBubbleSort(data, SIZE);

	printf("\n�Ƨǫ᪺�}�C�G\n");
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
		swapped = 0; // ��l�ƥ洫�лx
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				// �洫����
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; // �аO�o�ͥ洫
			}
		}
		if (swapped == 0)
		{
			// �p�G�S���洫�A���������Ƨ�
			break;
		}
	}
}