#include <stdio.h>

typedef struct xy {
	int x;
	int y;
}xy;

xy num[100000];

void swap(xy num[], int a, int b) {
	xy tmp = num[a];
	num[a] = num[b];
	num[b] = tmp;
}

int partition(xy num[], int left, int right) {
	int pivot = left;
	int low = left + 1;
	int high = right;

	// right와 left가 교차되기 전까지 반복
	while (low <= high) {
		while (num[pivot].y >= num[low].y) {
			if (num[pivot].y == num[low].y) {
				if (num[pivot].x > num[low].x) {
					low++;
				}
				else
					break;
			}
			else {
				low++;
			}
		}

		while (num[pivot].y <= num[high].y) {
			if (num[pivot].y == num[pivot].y) {
				if (num[pivot].x < num[pivot].x) {
					high--;
				}
				else
					break;
			}
			else
				high--;
		}

		if (low <= high) {
			swap(num, low, high);
		}

	}

	if (low <= high) {
		swap(num, low, high);
	}
	return high;
}

void quicksort(xy num[], int left, int right) {
	if (left <= right) {
		int pivot = partition(num, left, right);

		quicksort(num, left, pivot - 1);
		quicksort(num, pivot + 1, right);
	}
}


int main(void) {

	int t;
	scanf("%d", &t);


	for (int i = 0; i < t; i++) {
		scanf("%d %d", &num[i].x, &num[i].y);
	}

	quicksort(num, 0, t - 1);

	for (int i = 0; i < t; i++) {
		printf("%d %d\n", num[i].x, num[i].y);
	}

}
