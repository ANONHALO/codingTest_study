#include <iostream>
#include <algorithm>
using namespace std;
int arr[501][501] = { 0 };
int dp[501][501] = { 0 };
int main(void) {

	int n;
	int result = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i + 1][j] = max(dp[i + 1][j], arr[i + 1][j] + dp[i][j]);
			dp[i + 1][j + 1] = max(dp[i + 1][j + 1], arr[i + 1][j + 1] + dp[i][j]);
		}

	}


	for (int i = 1; i <= n; i++) {
		result = max(result, dp[n][i]);
	}
	cout << result;
	return 0;
}
