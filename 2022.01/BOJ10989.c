/* 백준 10989 수 정렬하기 3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10001];


int main(void) {
	int n;
	scanf("%d", &n);

	int a;

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		arr[a]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}
