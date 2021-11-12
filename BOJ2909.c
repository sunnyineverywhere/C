#include <stdio.h>

int main(void) {

	int A;
	int B;

	scanf("%d %d", &A, &B);

	int a[3];
	int b[3];

	for (int i = 0; i < 3; i++) {
		a[i] = A % 10;
		A = A / 10;

		b[i] = B % 10;
		B = B / 10;
	}

	A = a[0] * 100 + a[1] * 10 + a[2];
	B = b[0] * 100 + b[1] * 10 + b[2];

	if (A > B) {
		printf("%d", A);
	}

	if (B > A) {
		printf("%d", B);
	}

	return 0;
}