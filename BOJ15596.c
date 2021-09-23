#include <stdio.h>

// long long 큰 단위 숫자 표현
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}
}
