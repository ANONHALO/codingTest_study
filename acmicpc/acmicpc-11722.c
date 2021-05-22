#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (((a)>(b))?(a):(b))
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,tmp;
	scanf("%d", &n);
	int* arr;
	int* dp;
	arr = (int*)malloc(sizeof(int) * n);
	
	dp = (int*)malloc(sizeof(int) * n);
	memset(dp, 1, sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		tmp = 0;
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[i] && dp[j] > tmp)tmp = dp[j];
		}
		dp[i] = tmp + 1;
	}
	tmp = 0;
	for (int i = 0; i < n; i++) {
		tmp = max(tmp, dp[i]);
	}
	printf("%d", tmp);
	free(arr);
	free(dp);
}