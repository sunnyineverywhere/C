#include <stdio.h>

int func1(int N) {
	int solve = 0;
	for (int i = 0; i < N; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			solve += i;
		}
	}
	printf("%d\n", solve);
}

int main(void) {

	func1(16);
	func1(34567);
	func1(27639);
	return 0;
}

// 시간복잡도 O(N)