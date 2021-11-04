#include <stdio.h>

int func4(int N) {
	int solve = 1;
	while (2 * solve <= N)
		solve *= 2;
	return solve;
}

int main(void) {

	printf("%d\n", func4(5));
	printf("%d\n", func4(9761582));
	printf("%d", func4(1024));

	return 0;
}