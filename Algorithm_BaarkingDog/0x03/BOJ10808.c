#include <stdio.h>
#include <string.h>

int main(void) {

	char S[101] = " ";
	int alphabet[26] = { 0 };

	scanf("%s", S);

	for (int i = 0; i < strlen(S); i++) {
		alphabet[S[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}

	return 0;
}
