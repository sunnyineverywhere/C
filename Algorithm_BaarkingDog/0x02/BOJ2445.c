#include <stdio.h>

int main(void) {

	int N;
	scanf_s("%d", &N);

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		for (int k = i; k < N; k++) {
			printf("  ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = N; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		for (int k = N - i; k > 0; k--) {
			printf("  ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}