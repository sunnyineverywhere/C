#include <stdio.h>
#include <string.h>

int main(void) {
	int N;
	scanf("%d", &N);

	int count[10] = { 0 };

	while (N != 0) {
		count[N % 10]++;
		N = N / 10;
	}

	count[6] = (count[6] + count[9] + 1) / 2;
	count[9] = 0;
	
	int max = 0;

	for (int i = 0; i < 9; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}

	printf("%d", max);

	

	return 0;
}