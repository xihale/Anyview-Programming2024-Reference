#include "allinclude.h" //DO NOT edit this line

int change(int n)
{
    // 创建一个数组 dp，用于保存支付特定金额的方法数量
    int dp[n + 1] = {0};
    dp[0] = 1; // 支付 0 元的方法只有一种，即不使用任何纸币

    // 对于每一种纸币面额，逐步更新 dp 数组
    int coins[] = {1, 5, 10};
    for (int i = 0; i < 3; i++)
    { // 遍历每种纸币
        int coin = coins[i];
        for (int j = coin; j <= n; j++)
        {
            dp[j] += dp[j - coin];
        }
    }

    return dp[n]; // 返回支付 n 元的方法数量
}
