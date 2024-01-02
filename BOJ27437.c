#include<stdio.h>

int main() 
{
    int a;
    scanf("%d", &a);
    int i = 1;
    int count = 1;
    while (1)
    {
        if (a <= i)break;
        a -= i;
        count++;
        i++;
    }

    if(count % 2 == 1)
        printf("%d/%d", count - a + 1,1+a-1);
    if(count % 2 == 0)
        printf("%d/%d", 1 + a - 1, count - a + 1);
    return 0;
}