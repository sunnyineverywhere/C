#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);

	int n;
	if (A < B) {
		n = A;
	}
	else {
		n = B;
	}

	int g;

	for (int i = 1; i <= n; i++) {
		if (A % i == 0 && B % i == 0) {
			g = i;
		}
	}

	int l = A * (B / g);
	printf("%d\n%d", g, l);

	return 0;
}