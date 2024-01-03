#include <stdio.h>
#include <stdlib.h>

double max_fun(double a, double b)
{
    return a > b ? a : b;
}

int main(void)
{
    int test_case;
    scanf("%d",&test_case);
    double * arr = (double*)malloc(sizeof(double) * 10001);
    double * dp = (double*)malloc(sizeof(double) * 10001);

    for(int i = 0; i < test_case; i++)
    {
        scanf("%lf",&arr[i]);
    }
    dp[0] = arr[0];
    dp[1] = max_fun(arr[1] * dp[0], arr[1]);

    double max = 0.0;

    max = dp[0] > dp[1] ? dp[0] : dp[1];

    for(int i = 2; i < test_case; i++)
    {
        dp[i] = max_fun(arr[i] * dp[i-1],arr[i]);

        if(max < dp[i])
            max = dp[i];
    }
    printf("%.3lf",max);
    return 0;

}