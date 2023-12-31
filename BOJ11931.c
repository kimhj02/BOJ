#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* first, const void* sncond)
{
    if (*(int*)first < *(int*)sncond)
        return 1;
    else if (*(int*)first > *(int*)sncond)
        return -1;
    else
        return 0;
}

int main()
{
    int a;
    int* arr = (int*)malloc(sizeof(int) * 1000001);
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, a, sizeof(int), compare);

    int c = sizeof(arr);

    for (int i = 0; i < a; i++)
        printf("%d\n", arr[i]);
    return 0;
}