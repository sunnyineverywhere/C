#include <stdio.h>

int main(void) {
	int N; // 참가 학생 수
	int K; // 한 방 배정 최대 인원 수
	scanf("%d %d", &N, &K);

	int girl[7] = { 0 };
	int boy[7] = { 0 };

	for (int i = 0; i < N; i++) {
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		if (a == 0) {
			girl[b]++;
		}
		if (a == 1) {
			boy[b]++;
		}
	}

	int cnt = 0;

	for (int i = 1; i < 7; i++) {
		cnt += girl[i] / K;

		if (girl[i] % K > 0)
			cnt++;

		cnt += boy[i] / K;
		if (boy[i] % K > 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}