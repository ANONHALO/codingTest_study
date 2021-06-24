#include <iostream>
#include <algorithm>

using namespace std;

int count = 0;
int n;
int arr[15] = { 0 };
bool promising(int num) {
	for (int i = 0; i < num; i++) {
		if (arr[i] == arr[num] || num - i == abs(arr[num] - arr[i]))
			return false;
	}

	return true;
}


void queen(int num) {
	if (num == n) {
		::count++;
		return;
	}

	for (int i = 0; i < n; i++) {
		arr[num] = i;
		if (promising(num)) {
			queen(num + 1);
		}
	}

}

int main(void) {
	cin >> n;
	queen(0);
	cout << ::count;
	return 0;
}
