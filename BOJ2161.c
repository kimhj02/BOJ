#include <stdio.h>
int main()
{
	int N, i, temp;
	int card[1001];
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		card[i] = i;
	}

	while (N > 0)
	{
		printf("%d ", card[1]);
		for (i = 1; i <= N; i++) // ī�� ������ �̵�
		{
			card[i] = card[i + 1];
		}

		N--;
		temp = card[1];
		for (i = 1; i <= N; i++)
		{
			card[i] = card[i + 1];
		}
		card[N] = temp; // �� �� ī�� �� �Ʒ���

	}
}