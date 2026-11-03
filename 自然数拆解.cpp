#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    /* 从 1 开始，每次试一个奇数作为首项 */
    for (int a = 1; ; a += 2) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a + 2 * i;       /* 累加这 n 个数 */
        }
        if (sum == n * n * n) {     /* 正好等于 n 的立方 */
            for (int i = 0; i < n; i++) {
                printf("%d", a + 2 * i);
                if (i < n - 1) printf(" ");
            }
            printf("\n");
            break;
        }
    }
    return 0;
}