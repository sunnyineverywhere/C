#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);

	int X[50] = { 0 };
	int Y[50] = { 0 };


	for (int i = 0; i < n; i++) {
		scanf("%d %d", &X[i], &Y[i]);
	}

	for (int i = 0; i < n; i++) {
		int solve = 1;
		for (int j = 0; j < n; j++) {
			if (X[i] < X[j] && Y[i] < Y[j]) {
				solve++;
			}
		}
		printf("%d ", solve);
	}



	return 0;
}
