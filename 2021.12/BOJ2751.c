#include <stdio.h>
#include <string.h>
#define MAX 1000000

int list[MAX];
int sorted[MAX];

void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left; j = mid + 1; k = left;
	while (i <= mid && j <= right) {
		if (list[i] < list[j]) {
			sorted[k++] = list[i++];
		}
		else {
			sorted[k++] = list[j++];
		}
	}

	if (i > mid) {
		for (l = j; l <= right; l++) {
			sorted[k++] = list[l];
		}
	}
	else {
		for (l = i; l <= mid; l++) {
			sorted[k++] = list[l];
		}
	}

	for (l = left; l <= right; l++) {
		list[l] = sorted[l];
	}
}

void merge_sort(int list[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

int main(void) {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &list[i]);
	}


	merge_sort(list, 0, t-1);

	for (int i = 0; i < t; i++) {
		printf("%d\n", list[i]);
	}

	return 0;
}