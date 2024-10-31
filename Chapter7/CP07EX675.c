#include "allinclude.h"  // DO NOT edit this line

void func(int s[], int n, int p[])
{
    int i;

    // 初始化各分数段统计数组 p，确保每个分数段计数从 0 开始
    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }

    // 遍历学生成绩数组 s，根据分数范围统计各分数段人数
    for (i = 0; i < n; i++) {
        if (s[i] < 60) {
            p[0]++;
        } else if (s[i] <= 69) {
            p[1]++;
        } else if (s[i] <= 79) {
            p[2]++;
        } else if (s[i] <= 89) {
            p[3]++;
        } else if (s[i] <= 100) {
            p[4]++;
        }
    }
}
