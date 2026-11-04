#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1) {      /* 读入正整数 n */
        return 0;
    }

    /* 奇数：二进制最低位一定是 1，必然要用到 2^0，分解不了 */
    if (n % 2 != 0) {
        printf("-1\n");
        return 0;
    }

    /* 偶数：从最高位往低位扫描，输出二进制里为 1 的那些 2^k */
    int first = 1;                   /* 控制空格 */
    for (int k = 30; k >= 1; k--) {  /* n < 2^30，指数从 30 往下试到 1 */
        int power = 1 << k;          /* 2^k */
        if (power > n) {
            continue;
        }
        if ((n & power) != 0) {      /* 这一位是 1 */
            if (!first) {
                printf(" ");
            }
            printf("%d", power);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}