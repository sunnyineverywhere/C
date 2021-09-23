#include <stdio.h>
#define N 3000000



int main(void) {
	int a[N];
	int total;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		total += a[i];
	}

	printf("%d", total);

}