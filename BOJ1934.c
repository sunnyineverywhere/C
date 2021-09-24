#include <stdio.h>

int gcd(int A, int B) {
	if (B == 0)
		return A;
	else
		return gcd(B, A % B);
}

int main(void) {
	int T;
	scanf_s("%d", &T);
	int A; int B;

	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A * B / gcd(A, B));
	}
}

