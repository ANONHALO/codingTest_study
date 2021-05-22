#define _CRT_SECURE_NO_WARNINGS
#define max(a,b) (((a)>(b))?(a):(b))
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dp[100001][2];	//[길이][마지막 계단 층수]


int main(void) {
	int t,n;	//테스트케ㅜ이스, 스티커길이
	int i = 0;
	int sum;
	scanf("%d", &t);
	
	for (int k = 0; k < t; k++) {	//t번 실행
		scanf("%d", &n);
		for (int j = 0; j < 2; j++) {
			for (int i = 0; i < n; i++) {
				scanf("%d", &dp[i][j]);
			}
		}
		//printf("%d + %d =",dp[1][0],dp[0][1]);
		dp[1][0] += dp[0][1];
		//printf(" %d\n", dp[1][0]);
		//printf("%d + %d =", dp[1][1], dp[0][0]);
		dp[1][1] += dp[0][0];
		//printf("%d\n", dp[1][1]);

		for (int i = 2; i < n; i++) {
			dp[i][0] += (dp[i - 1][1] > dp[i - 2][1] ? dp[i - 1][1] : dp[i - 2][1]);
			//printf("%d ", dp[i][0]);
			dp[i][1] += (dp[i - 2][0] > dp[i - 1][0] ? dp[i - 2][0] : dp[i - 1][0]);
			//printf("%d ", dp[i][1]);
		}

		sum = max(dp[n-1][0], dp[n-1][1]);
		printf("%d\n", sum);


	}
	return 0;
}