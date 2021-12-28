#include <stdio.h>

int main(void) {
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int cnt = 1;
	int sum = a;

	if (b >= c) {
		printf("-1");
		return 0;
	}

	cnt = a / (c - b) + 1;

	printf("%d", cnt);

	return 0;
}
