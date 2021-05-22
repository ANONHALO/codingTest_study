#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (((a)>(b))?(a):(b)) 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dp;
int* store;
int n;

int main(void) {
	scanf("%d", &n);
	dp = (int*)malloc(sizeof(int) * n);
	memset(dp, 0, sizeof(dp));
	store = (int*)malloc(sizeof(int) * n);
	//check = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i <n; i++) {
		scanf("%d", &dp[i]);
	}
	store[0] = dp[0];
	store[1] = max(dp[0] + dp[1], dp[1]);
	store[2] = max(dp[0] + dp[2], dp[1] + dp[2]);

	for (int i = 3; i < n; i++) {
		store[i] = max(store[i - 2] + dp[i], store[i - 3] + dp[i - 1] + dp[i]);

	}
	printf("%d", store[n - 1]);
	return 0;
}