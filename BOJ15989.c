#include <stdio.h>
#include <string.h>

int main(void)
{
    int test_case;
    int coin_num;
    int coin_kind[21];
    int cost;
    long long dp[10010];

    scanf("%d",&test_case);
    for(int i = 0; i < test_case; i++)
    {
        coin_kind[0] = 1;
        coin_kind[1] = 2;
        coin_kind[2] = 3;

        scanf("%d",&cost);
        dp[0] = 1;

        for(int j = 0; j < 3; j++)
        {
            for(int k = coin_kind[j]; k <= cost; k++)
            {
                dp[k] += dp[k-coin_kind[j]];
            }
        }
        
        printf("%lld\n",dp[cost]);

        memset(coin_kind,0,sizeof(coin_kind));
        memset(dp,0,sizeof(dp));
    }

    return 0;
}