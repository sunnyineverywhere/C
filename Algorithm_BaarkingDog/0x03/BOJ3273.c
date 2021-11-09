#include <stdio.h>

int main(void) {

	int n;
	int N[100001] = { 0 };
	int occur[2000001];
	int x;
	int cnt = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &N[i]);
	}
	scanf("%d", &x);

	int start = 0;
	int end = n - 1;
	int tmp = 0;

	for (int i = 0; i < n; i++) {
		if (x - N[i] > 0 && occur[x - N[i]] == 1) {
			cnt++;
		}
		else {
			occur[N[i]] = 1;
		}
	}

	printf("%d", cnt);

	return 0;
}