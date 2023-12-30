#include <stdio.h>
#include <string.h>
 
int main(void)
{
    int n,k;

    scanf("%d %d",&n, &k);
    
    int dp[101];
    int coin[10010];
    memset(dp,0,101);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&coin[i]);
    }

    dp[0] = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = coin[i]; j <= k; j++)
        {
            dp[j] += dp[j-coin[i]];
        }
    }
    printf("%d",dp[k]);
    return 0;
}

/*      1   2   3   4   5   6   7   8   9   10
    1   1   1   1   1   1   1   1   1   1   1
    2   0   1   1   2   2   3   3   4   4   5      
    5   0   0   0   0   1   1   2   2   3   4
¹æ¹ý    1   2   2   3   4   5   6   7   8   10   
*/