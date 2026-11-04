#include <stdio.h>

/* 判断素数：试除到 sqrt(x) 就够，O(√n) */
int is_prime(int x)
{
    if (x < 2) {
        return 0;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    /* 只需试到 n/2：a+b 与 b+a 是同一组，i 从小到大保证 a <= b */
    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d %d\n", i, n - i);
            return 0;
        }
    }

    return 0;
}
  