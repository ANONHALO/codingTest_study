#include <iostream>
#include <vector>
using namespace std;

int arr[101][101] = { 0 };
long long dp[101][101] = { 0 };
int n;

int main(void) {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++){
			if (arr[i][j] == 0) continue;
			if(i + arr[i][j]<=n) dp[i + arr[i][j]][j]+= dp[i][j];
			if(j + arr[i][j]<=n) dp[i][j + arr[i][j]] += dp[i][j];
		}
	}


	cout << dp[n][n];


	return 0;
}
