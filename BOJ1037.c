#include <stdio.h>


void sort(int list[], int n) {
	int i, j, least, tmp;
	for (i = 0; i < n; i++) {
		least = i;
		for (j = i + 1; j < n; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
		}
		tmp = list[i];
		list[i] = list[least];
		list[least] = tmp;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);


	int ar[51] = { 0 };


	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}

	sort(ar, n);

	printf("%d", ar[0] * ar[n - 1]);

	return 0;
}