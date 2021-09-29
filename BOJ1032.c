#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	char arr[51] = { 0 };
	char output[51] = { 0 };

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		for (int j = 0; j < 51; j++) {
			if (i == 0) {
				for (int k = 0; k < 51; k++) {
					output[k] = arr[k];
				}
			}
			else
				for (int k = 0; k < 51; k++) {
					if (arr[k] != output[k]) {
						output[k] = '?';
					}
				}
		}
	}
	printf("%s", output);


}