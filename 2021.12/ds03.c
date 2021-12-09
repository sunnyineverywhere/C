#include <stdio.h>
#include <string.h>

// 선택정렬
int sort(int n, int ta[], int tb[]) {
	int i, j, key;
	for (int i = 1; i < n; i++) {
		key = ta[i];
		j = i - 1;
		while (j >= 0 && ta[j] > key) {
			ta[j + 1] = ta[j];
			j--;
		}
		ta[j + 1] = key;
	}
	for (int i = 1; i < n; i++) {
		key = tb[i];
		j = i - 1;
		while (j >= 0 && tb[j] > key) {
			tb[j + 1] = tb[j];
			j--;
		}
		tb[j + 1] = key;
	}
}

int main(void) {
	int n, t;

	//입력 받기
	scanf("%d %d", &n, &t);
	
	int ta[15] = { 0 };
	int tb[15] = { 0 };

	double aa = 0;
	double ab = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &ta[i]);
		aa += ta[i];
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &tb[i]);
		ab += tb[i];
	}

	// 평균
	aa = aa / n;
	ab = ab / n;

	double f = aa; // 처음 평균 저장

	sort(n, ta, tb); // 양팀 오름차순 정렬

	int min = ta[0];
	int max = tb[n-1];

	// a팀 최소값이 b팀 최대값보다 작을 때 && 교환가능횟수가 0보다 클 때 교환
	while (min < max && t > 0) {
		ta[0] = max;
		tb[n-1] = min;

		sort(n, ta, tb);

		min = ta[0];
		max = tb[n-1];

		t--;
	}

	// 교환 후 평균
	aa = 0;
	for (int i = 0; i < n; i++) {
		aa += ta[i];
	}
	aa = aa / n;
	
	// a팀 팀원 점수 출력
	for (int i = 0; i < n; i++) {
		printf("%d ", ta[i]);
	}

	printf("\n");

	// 처음 평균 -> 바뀐 평균 출력
	printf("%0.1f -> %0.1f", f, aa);

	return 0;
}
