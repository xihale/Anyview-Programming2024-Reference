#include "allinclude.h" // DO NOT edit this line

int func(int v[], int n, int k, int c[])
{
    int i;
    int maxVotes = 0; // 用于存储最高得票数

    // 初始化得票数组 c，将每个候选人的得票数设为 0
    for (i = 0; i <= k; i++)
    {
        c[i] = 0;
    }

    // 统计每位候选人的得票数
    for (i = 0; i < n; i++)
    {
        int candidate = v[i]; // 获取选票中的候选人号码
        c[candidate]++;       // 计数，将得票数存入对应候选人的索引中
    }

    // 找出最高得票数
    for (i = 0; i <= k; i++)
    {
        if (c[i] > maxVotes)
        {
            maxVotes = c[i];
        }
    }

    return maxVotes; // 返回最高得票数
}
