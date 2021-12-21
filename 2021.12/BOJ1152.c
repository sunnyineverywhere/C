#include <stdio.h>
#include <string.h>

char sen[1000000] = "";

int main(void) {
	scanf("%[^\n]", sen);

	int len = strlen(sen);

	if (len == 1) {
		if (sen[0] == ' ') {
			printf("0");
			return 0;
		}
	}

	int w = 0;


	for (int i = 1; i < len-1; i++) {
		if (sen[i] == ' ') {
			w++;
		}
	}

	printf("%d", w+1);
	
	return 0;
}