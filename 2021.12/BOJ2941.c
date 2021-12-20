#include <stdio.h>
#include <string.h>

int main(void) {

	char word[100] = "";
	scanf("%s", word);

	int sum = strlen(word);
	int len = sum;

	for (int i = 0; i < len; i++) {
		if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') {
				sum--; sum--;
				i++; i++;
			}
			else if (word[i + 1] == '-') {
				sum--;
				i++;
			}

		}
		else if (word[i] == 'c'  || word[i] == 's' || word[i] == 'z') {
			if (word[i + 1] == '=' || word[i+1] == '-') {
				sum--;
				i++;
			}
		}
		else if ((word[i] == 'l' && word[i + 1] == 'j') || (word[i] == 'n' && word[i + 1] == 'j')) {
			sum--;
			i++;
		}
	}

	printf("%d", sum);

	return 0;
}
