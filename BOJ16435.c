#include <stdio.h>

int main() 
{
    int a, b;
    int temp;
    int arr[10001];
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
        scanf("%d", &arr[i]);

	for (int i = 0; i < a; i++)		//내림차순 정렬
	{
		for (int j = i + 1; j < a; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (b >= arr[i])
			b++;
	}
	printf("%d", b);
 
    return 0;
}