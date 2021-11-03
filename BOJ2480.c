#include <stdio.h>

int main(void) {
	int a; int b; int c;
	
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a != b && b != c && a != c) {
		int max = 0;
		if (a > b)
			max = a;
		else if (b > c)
			max = b;
		else
			max = c;
		printf("%d", max * 100);
	}
	else {
		if (a == b) {
			printf("%d", 1000 + a * 100);
		}
		else if (a == c) {
			printf("%d", 1000 + a * 100);
		}
		else
		{
			printf("%d", 1000 + b * 100);
		}
	}

	return 0;
}