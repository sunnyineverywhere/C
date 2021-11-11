#include <stdio.h>


int main(void) {

	int a = 1;
	int b = 1;

	int store[10000] = { 0 };

	int i = 0;
	
	while (a != 0 && b != 0) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		if (a > b) {
			store[i] = 1;
		}
		else
			store[i] = 0;
		i++;
	}

	for (int j = 0; j < i; j++) {
		if (store[j] == 1) {
			printf("Yes");
		}
		if(store[j] == 0)
			printf("No");
		printf("\n");
	}

}

