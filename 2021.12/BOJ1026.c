#include <stdio.h>
#define swap(x, y, t) t = x, x = y, y = t


int main(void) {
	int n;
	int a[50] = { 0 };
	int b[50] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}

	int tmp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				swap(a[j], a[j + 1], tmp);
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (b[j] < b[j + 1]) {
				swap(b[j], b[j + 1], tmp);
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i] * b[n - 1 - i];
	}
	printf("%d", sum);

	return 0;
}