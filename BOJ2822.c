#include <stdio.h>

#define N 8

int list[N];

int main(void) {

	for (int i = 0; i < 8; i++) {
		scanf("%d", &list[i]);
	}

	// 작은 걸 골라 내는 게 더 빠르지 않나?
	// 아 열받아 -> 조건문 잘못 씀


	int j = 0;
	int min;

	while (j < 3){
		int index = 0;
		min = 151;
		for (int i = 0; i < N; i++) {
			if (list[i] < min && list[i] >= 0) {
				min = list[i];
				index = i;
			}
		}
		list[index] = -1;
		j++;

	}

	int sol = 0;

	for (int i = 0; i < N; i++) {
		if (list[i] >= 0) {
			sol += list[i];
		}
	}

	printf("%d\n", sol);

	for (int i = 0; i < N; i++) {
		if (list[i] >= 0) {
			printf("%d ", i + 1);
		}
	}
	
	return 0;
}