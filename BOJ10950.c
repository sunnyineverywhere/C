#include <stdio.h>

int main(void) {

	int t;
	scanf("%d", &t);

	int ar[2] = { 0 };
	int s[1000] = { 0 };

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &ar[0], &ar[1]);
		s[i] = ar[0] + ar[1];
	}

	for (int i = 0; i < t; i++) {
		printf("%d\n", s[i]);
	}

	return 0;
}