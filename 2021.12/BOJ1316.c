#include <stdio.h>

char word[101] = "";
int check[26] = { 0 };

int main(void) {

	int t;
	scanf("%d", &t);

	int output = 0;

	for (int i = 0; i < t; i++) {
		scanf("%s", word);
		int j = 0;
		int point = 1;
		while (1) {
			if (word[j] == '\0')
				break;

			char c = word[j];
			if (check[c - 97] == 1) {
				if (word[j - 1] != word[j]) {
					point = 0;
					break;
				}
			}
			else {
				check[c - 97] = 1;
			}

			j++;
		}
		if (point == 1) {
			output++;
		}
		for (int k = 0; k < 26; k++) {
			check[k] = 0;
		}
	}

	printf("%d", output);

	return 0;
}