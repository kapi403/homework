#include <stdio.h>

int main(void)
{
    double x, y;
    double cx[4], cy[4];
    int i, height;

    /* 读入两个实数；失败说明有非数字 */
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("input error\n");
        return 0;
    }

    /* 四个底座圆心 */
    cx[0] =  2.0; cy[0] =  2.0;
    cx[1] = -2.0; cy[1] =  2.0;
    cx[2] = -2.0; cy[2] = -2.0;
    cx[3] =  2.0; cy[3] = -2.0;

    height = 0;
    for (i = 0; i < 4; i++) {
        double dx = x - cx[i];
        double dy = y - cy[i];
        /* 点到圆心的距离 <= 半径 1 => 在炮台底座内 */
        if (dx * dx + dy * dy <= 1.0 + 1e-9) {
            height = 10;
            break;
        }
    }

    printf("%d\n", height);
    return 0;
}