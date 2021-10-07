#include <stdio.h>
#include <stdlib.h>
#define M 1000

int main(void) {
	float N;
	float subject[M + 1];
	float max = 0;

	scanf("%f", &N);
	for (int i = 0; i < N; i++) {
		scanf("%f", &subject[i]);
	}

	for (int i = 0; i < N; i++) {
		if (subject[i] > max) {
			max = subject[i];
		}
	}

	float sum = 0;

	for (int i = 0; i < N; i++) {
		subject[i] = subject[i] / max * 100;
		sum += subject[i];
	}

	float ave = sum / N;
	printf("%f", ave);
}