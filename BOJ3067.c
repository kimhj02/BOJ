#include <stdio.h>
#include <string.h>

int main(void)
{
    int test_case;
    int coin_num;
    int coin_kind[10010];
    int cost;
    int dp[10010];
    scanf("%d",&test_case);
    for(int i = 0; i < test_case; i++)
    {
        scanf("%d",&coin_num);
        for(int j = 0; j < coin_num; j++)
        {
            scanf("%d",&coin_kind[j]);
        }
        scanf("%d",&cost);

        dp[0] = 1;

        for(int j = 0; j < coin_num; j++)
        {
            for(int k = coin_kind[j]; k <= cost; k++)
            {
                dp[k] += dp[k-coin_kind[j]];
            }
        }
        printf("%d\n",dp[cost]);
        memset(coin_kind,0,10010);
        memset(dp,0,10010);
    }
    return 0;
}