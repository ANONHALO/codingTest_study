#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (((a)>(b))?(a):(b))
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int *dp;
	int *store;

	scanf("%d", &n);
	dp = (int*)malloc(sizeof(int) * n);
	store = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {	//
		scanf("%d", &dp[i]);
	}
	/*풀이작성*/
	store[0] = dp[0];
	for (int i = 1; i < 3 && i < n; i++) {
		if (i == 1)store[i] = dp[i] + dp[i - 1];
		else if (i == 2) {
			store[i] = max(dp[i] + dp[i - 1], store[i - 1]);
			store[i] = max(store[i], dp[i] + dp[i - 2]);
		}
	}
	for (int i = 3; i < n; i++) {
		store[i] = max(store[i - 2] + dp[i], store[i - 1]);
		store[i] = max(store[i], dp[i] + dp[i - 1] + store[i - 3]);
	}
	printf("%d", store[n-1]);
	free(dp);
	free(store);
}