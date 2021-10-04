#include <stdio.h>

int main(void) {
	int A; int B; int C;
	scanf("%d %d %d", &A, &B, &C);

	int MUL = A * B * C;
	int arr[10] = { 0 };

	while (MUL > 0) {
		int n;
		n = MUL % 10;
		arr[n]++;
		MUL = MUL / 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	
}