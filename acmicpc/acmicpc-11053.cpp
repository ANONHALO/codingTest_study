#include <algorithm>
#include <vector>
#include <iostream>
//#include <stdio.h>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector <int> dp(n);
	vector <int> store(n, 1);
	
	for (int i = 0; i < n; i++) {
		cin >> dp[i]; 
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
		tmp = max(tmp, store[i]); //algorithm library에 max() 함수가 내장되어 있음.
	}
	printf("%d", tmp);
	return 0;
}
