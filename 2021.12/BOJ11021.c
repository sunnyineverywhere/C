#include <stdio.h>

typedef struct numbers {
	int a;
	int b;
	int sum;
}numbers;

int main(void) {

	int t;
	scanf("%d", &t);

	numbers number[1000];
	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &number[i].a, &number[i].b);
		number[i].sum = number[i].a + number[i].b;
	}
	for (int i = 1; i <= t; i++) {

		printf("Case #%d: %d\n", i, number[i].sum);
	}

	return 0;
}
