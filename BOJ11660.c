#include <stdio.h>

int arr[1024][1024];
int dp[1024][1024];
int main(void)
{
    int arr_size;
    int test_num;
    int total = 0;
    int x1, x2, y1, y2;
    scanf("%d %d",&arr_size, &test_num);
    for(int i = 0; i < arr_size; i++)
    {
        for(int j = 0; j < arr_size; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 1; i < arr_size; i++)
    {
        for(int j = 1; j < arr_size; j++)
        {
            dp[i][j] = arr[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }

    for(int i = 0; i < test_num; i++)
    {
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        total = dp[x2][y2] - dp[x1-1][y2];
        printf("%d\n",total);
    }

    return 0;
}