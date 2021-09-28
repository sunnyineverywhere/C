#include <stdio.h>

int main(void) {
	int A; int B;
	scanf_s("%d %d", &A, &B);

	if (A > B) {
		printf(">");
	}
	else if (A < B) {
		printf("<");
	}
	else
		printf("==");
	
}