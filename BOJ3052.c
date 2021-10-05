#include <stdio.h>

int main(void) {
	int A;
	int arr[11] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}

	int cnt = 0;
	int res = 0;
	for (int i = 0; i < 10; i++) {
		cnt = 0;
		for (int j = i+1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				cnt++;
			}
		}
		if (cnt == 0) {
			res++;
		}
	}
	printf("%d", res);
}