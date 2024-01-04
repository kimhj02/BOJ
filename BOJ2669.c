#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int x1, x2, y1, y2;
	int arr[101][101];
	int total = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int i = x1 - 1; i < x2 - 1; i++)
		{
			for (int j = y1 - 1; j < y2 - 1; j++)
			{
				arr[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
				total++;
		}
	}
	printf("%d", total);
	return 0;
}