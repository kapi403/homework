#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, r, x, nx;

    if (scanf("%lf %lf", &x1, &r) != 2) {   /* 读入 x1 和 r */
        return 0;
    }

    x = x1;                                  /* x 表示 x(n-1) */

    for (int n = 2; n <= 1000; n++) {
        nx = r * x * (1.0 - x);              /* 算出 x_n */

        if (fabs(nx - x) < 0.00001) {        /* 收敛判断 */
            printf("%.4f 1\n", nx);
            return 0;
        }

        x = nx;                              /* 准备下一轮 */
    }

    /* 迭代到 x1000 仍未收敛 */
    printf("%.4f 0\n", x);
    return 0;
}