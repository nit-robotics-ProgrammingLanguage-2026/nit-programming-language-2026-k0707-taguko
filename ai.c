#include <stdio.h>

int is_prime(int x)
{
	if (x < 2) {
		return 0;
	}

	for (int i = 2; i <= x / i; i++) {
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

	if (n > 10000) {
		printf("NG\n");
		return 0;
	}

	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (is_prime(i)) {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}
