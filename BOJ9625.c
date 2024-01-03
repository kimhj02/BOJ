#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	int dp1[46];
	int dp2[46];

	dp1[0] = 1;
	dp1[1] = 1;
	dp2[0] = 1;
	dp2[1] = 0;
	for (int i = 2; i < 46; i++)
	{
		dp1[i] = dp1[i - 2] + dp1[i - 1];

		dp2[i] = dp2[i - 2] + dp2[i - 1];

	}
	printf("%d %d", dp2[num], dp1[num] - dp2[num]);
	return 0;
}