#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int m[100001] = { 0 };

int compare(const void* arg1, const void* arg2) {
	if (*(int*)arg1 > *(int*)arg2) {
		return 1;
	}
	else if (*(double*)arg1 == *(double*)arg2) {
		return 0;
	}
	else
		return -1;
}

int search_binary(int key, int low, int high) {
	int middle;
	while (low <= high) {
		middle = (low + high) / 2;
		if (key == m[middle]) {
			return 1;
		}
		else if (key < m[middle]) {
			return search_binary(key, low, middle - 1);
		}
		else {
			return search_binary(key, middle + 1, high);
		}
	}
	return 0;
}



int main(void) {

	int n; int input;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}

	/*
	for (int i = 0; i < n; i++) {
		printf("%d ", m[i]);
	}
	
	* printf("\n");
	* 	for (int i = 0; i < n; i++) {
		printf("%d ", m[i]);
	}
	*/
	

	qsort((void*)m, (size_t)n, sizeof(int), compare);

	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &input);
		printf("%d\n", search_binary(input, 0, n));
	}


	return 0;
}