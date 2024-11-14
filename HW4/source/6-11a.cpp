#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30
void bubbleSort(int array[], int size);

int Header_15() //6.11(a)
{
	int data[SIZE];
	int i;

	// ��l���H���ƥͦ���
	srand(time(NULL));

	// �ͦ��H���ƶ�R�}�C
	for (i = 0; i < SIZE; i++)
	{
		data[i] = rand() % 1000; // ���� 0 �� 999 ���H����
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

	// �I�s�_�w�ƧǨ��
	bubbleSort(data, SIZE);

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

void bubbleSort(int array[], int size) //6.11(a)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++)
	{
		// �C�����N�A���h�`�����d����
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				// �洫����
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

