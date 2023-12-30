#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    long long arr[81];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i < 81; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("%lld", arr[num] * 2 + arr[num - 1] * 2);
    return 0;
}