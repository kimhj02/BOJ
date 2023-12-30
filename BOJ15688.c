#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	int a;
	int* arr = (int*)malloc(sizeof(int) * 1000001);
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr,a, sizeof(int), compare);

	for (int i = 0; i < a; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}