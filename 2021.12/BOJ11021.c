#include <stdio.h>

typedef struct numbers {
	int a;
	int b;
	int sum;
}numbers;

int main(void) {

	int t;
	scanf("%d", &t);

	int a, b;
	for (int i = 1; i <= 5; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}

	return 0;
}
