#include <stdio.h>

int main(void) {
	int N;
	scanf_s("%d", &N);

	int num;
	// -100000 ~ 100000 ������ ��� �����̹Ƿ�
	int max = -1000001;
	int min = 1000001;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}

	printf("%d %d", min, max);
}