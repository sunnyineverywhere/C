#include <stdio.h>

int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int B[4] = { NULL };
	
	B[3] = b;

	B[2] = b / 100;
	b = b % 100;
	B[1] = b / 10;
	B[0] = b % 10;


	for (int i = 0; i <= 3; i++) {
		printf("%d\n", a * B[i]);
		
	}
}