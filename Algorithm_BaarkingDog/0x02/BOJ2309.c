#include <stdio.h>

int main(void) {

	int height[9] = { 0 };
	int out[7] = { 0 };
	int total = 0;
	int a = 0; int b = 0;
	int isfound = 0;


	// input the height of nine dwarf
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &height[i]);
		total += height[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (total - height[i] - height[j] == 100) {
				a = i;
				b = j;
				isfound = 1;
				break;
			}
		}
		if (isfound == 1)
			break;
	}

	int s = 0;
	for (int i = 0; i < 9; i++) {
		if (i != a && i != b) {
			out[s] = height[i];
			s++;
		}
	}

	int temp = 0;
	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 7; j++) {
			if (out[j] < out[i]) {
				temp = out[i];
				out[i] = out[j];
				out[j] = temp;
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		printf("%d\n", out[i]);
	}	

	return 0;
}
