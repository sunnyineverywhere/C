#include <stdio.h>

int main(void) {
	int c;
	scanf("%d", &c);

	int n;
	int num[1000] = { 0 };
	float res[1000] = { 0 };
	int a;



	for (int i = 0; i < c; i++) {
		scanf("%d", &a);
		float b = 0;
		for (int j = 0; j < a; j++) {
			scanf("%d", &num[j]);
			b += num[j];
		}
		b /= a;
		for (int k = 0; k < a; k++) {
			if (num[k] > b) {
				res[i]++;
			}
		}
		res[i] = res[i] / a * 100;
	}

	for (int i = 0; i < c; i++) {
		printf("%.3f%%\n", res[i]);
	}

	return 0;
}