#include <stdio.h>

int main(void) {
	int H; int M;
	int temp;
	scanf_s("%d %d", &H, &M);

	if (M - 45 < 0) {
		H = H - 1;
		temp = M - 45;
		M = 60 + temp;
		if (H < 0)
			H = H + 24;
	}
	else {
		M = M - 45;
	}

	printf("%d %d", H, M);
}