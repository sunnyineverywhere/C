#include <stdio.h>

int main(void) {
	int N; int A[1000];
	int X;

	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}
	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			printf("%d ", A[i]);
		}
	}

	return 0;
}