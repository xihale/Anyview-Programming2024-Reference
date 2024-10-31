#include "allinclude.h" // DO NOT edit this line

int func(int v[], int n, int k, int c[])
{
    int i;
    int maxVotes = 0;     // 用于存储最高得票数
    int maxCandidate = 0; // 用于存储第一个最高得票人的号码

    // 初始化得票数组 c，将每个候选人的得票数设为 0
    for (i = 0; i <= k; i++)
    {
        c[i] = 0;
    }

    // 遍历选票数组，统计每位候选人的得票数
    for (i = 0; i < n; i++)
    {
        int candidate = v[i]; // 获取选票中的候选人号码
        if (candidate >= 1 && candidate <= k)
        {                       // 检查候选人号码范围是否有效
            c[candidate]++; // 将得票数存入对应候选人的索引中
        }
    }

    // 找出最高得票数的候选人号码
    for (i = 0; i <= k; i++)
    {
        if (c[i] > maxVotes)
        {
            maxVotes = c[i];
            maxCandidate = i; // 将候选人号码存入 maxCandidate，索引从 0 开始
        }
    }

    return maxCandidate; // 返回第一个最高得票人的号码
}
