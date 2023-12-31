#include <stdio.h>

// �ִ�����(Greatest Common Divisor) ���ϱ�
long long GCD(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a % b);
	}
}

// �ּҰ����(Least Common Multiple) ���ϱ�
long long LCM(long long a, long long b)
{
	return (a * b) / GCD(a, b);
}

int main(void)
{
	long long a, b;
	scanf("%lld %lld", &a, &b);

	printf("%lld", LCM(a, b));
	return 0;
}