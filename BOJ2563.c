#include <stdio.h>

int main(void)
{	
	int arr[100][100] = { 0, };
	int tatal = 1000;
	int num;
	int a, b;
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a; j < a+10; j++)
		{
			for (int k = b; k < b+10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}