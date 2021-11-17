#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);

	char ox[80] = { 0 };
	int arr[1000] = { 0 };
	
	for (int i = 0; i < n; i++) {
		int re = 0;
		scanf("%s", ox);
		for (int j = 0; j < strlen(ox); j++) {			
			if (ox[j] == 'O') {
				arr[i]++;
				if (j != 0 && ox[j - 1] == 'O') {
					re++;
					arr[i] += re;
				}
			}
			else{
				re = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}