#include <stdio.h>

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 0) {
				return 1;
				break;
			}
			else
				return 0;
		}
	}
}

// O(N^2);

int main(void) {
	
	func2({ 1, 52, 48 }, 3);


	return 0;
}