#include <stdio.h>

// 素数判定関数
int is_prime(int x);

int main(void)
{
    int n, cnt = 0;
    scanf("%d", &n);

    /* TODO: 課題0707 */
    if (n > 10000) {
        printf("NG");
    } else {
        for (int i = 1; i <= n; i++) {
            if (is_prime(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}

int is_prime(int x)
{
    /* TODO: x が素数なら 1、そうでなければ 0 を返す */
    // 2未満の整数は素数ではない
    if (x < 2)
        return 0;
    // 2以上の整数について、2から√xまでの整数で割り切れるかを調べる
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
