#include <stdio.h>

/* 判断数字 x 的十进制表示里有没有 7 */
int has7(int x)
{
    while (x > 0) {
        if (x % 10 == 7) {
            return 1;
        }
        x /= 10;
    }
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int skip[3] = {0, 0, 0};   /* 三个人各自跳过的个数 */
    int reported = 0;          /* 已经报出的数字个数 */
    int num = 1;               /* 当前轮到要报的数字 */

    while (reported < n) {     /* 报满 n 个才结束 */
        int person = (num - 1) % 3;      /* 0、1、2 表示三个人 */

        if (num % 7 == 0 || has7(num)) {
            skip[person]++;              /* 该跳过：这个人跳过数 +1 */
        } else {
            reported++;                  /* 正常报出：已报数 +1 */
        }

        num++;                           /* 换下一个数字，也就轮到下一个人 */
    }

    printf("%d %d %d\n", skip[0], skip[1], skip[2]);
    return 0;
}