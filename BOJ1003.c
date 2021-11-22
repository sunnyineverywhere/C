#include <stdio.h>

int fibonaccci(int n) {
	int num[41][2] = { 0 };
	
	num[0][0] = 1;
	num[0][1] = 0;
	num[1][0] = 0;
	num[1][1] = 1;

	for (int i = 2; i <= n; i++) {
		num[i][0] = num[i - 1][0] + num[i - 2][0];
		num[i][1] = num[i - 1][1] + num[i - 2][1];
	}
	printf("%d %d\n", num[n][0], num[n][1]);
}

int main(void) {
	int t;
	scanf("%d", &t);

	int n[1000] = { 0 }; // 피보나치 연산할 수 입력받고

	for (int i = 0; i < t; i++) {
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < t; i++) {
		fibonaccci(n[i]);
	}

	


	return 0;
}