#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (((a)>(b))?(a):(b))
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dp;	//처음 수열 입력
int* store;	//수열의 크기별 부분수열 길이

int main(void) {
	int n;
	scanf("%d", &n);
	dp = (int*)malloc(sizeof(int) * n);
	store = (int*)malloc(sizeof(int) * n);
	memset(store, 1, sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &dp[i]);
	}
	int tmp;
	for (int i = 0; i < n; i++) {
		tmp = 0;
		for (int j = 0; j < i; j++) {
			if (dp[i] > dp[j] && store[j] > tmp) tmp = store[j];
		}
		store[i] = tmp + 1;
	}
	tmp = 0;
	for (int i = 0; i < n; i++) {
		tmp = max(tmp, store[i]);
	}
	printf("%d", tmp);
	return 0;
}