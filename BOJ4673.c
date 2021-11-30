#include <stdio.h>

int arr[10001] = { 0 };

int d(int n) {
	int sum = n;
	
	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}

int main(void) {

	
	int res;

	for (int i = 1; i < 10001; i++) {
		res = d(i);
		if (res < 10001) {
			arr[res] = 1;
		}
	}
	
	for (int i = 1; i < 10000; i++) {
		// 어디서 헛짓을 했나 했더니...
		if (arr[i] != 1) {
			printf("%d\n", i);
		}
	}
	

	return 0;
}
