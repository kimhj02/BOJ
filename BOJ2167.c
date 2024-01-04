#include <stdio.h>

int main(void)
{
	int a, b;
	int i, j, x, y;
	int k;
	int arr[300][300];
	int total = 0;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &arr[i][j]);
			
		}
	}

	scanf("%d", &k);

	for (int n = 0; n < k; n++)
	{
		scanf("%d %d %d %d", &i, &j, &x, &y);

		for (int m = i-1; m < x; m++)
		{
			for (int o = j-1; o < y; o++)
			{
				total += arr[m][o];
			}
		}
		printf("%d\n", total);
		total = 0;
	}
	return 0;
}