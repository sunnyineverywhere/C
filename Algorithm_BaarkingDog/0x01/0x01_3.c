#include <stdio.h>

int func3(int N) {
	for (int i = 1; i * i <= N; i++) {
		if (i * i == N) {
			return 1;
			break;
		}
	}
	return 0;
}

int main(void) {

	int a = func3(9);
	int b = func3(693953651);
	int c = func3(756580036);

	printf("%d %d %d", a, b, c);

	return 0;
}