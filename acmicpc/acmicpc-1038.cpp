#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	long long n;
	int flag=0;
	vector <int> result_vector;
	long long result = -1;
	long long mul = 1;
	int len;
	cin >> n;
	result_vector.push_back(0);
	while(n!=0){
		if (flag) {
			n--;
			result_vector[0]++;
		}
		flag = 1;
		len = result_vector.size();

		for (int i = 0; i < len - 1; i++) {
			if (result_vector[i] >= result_vector[i + 1]) {
				flag = 0;
				result_vector[i + 1]++;
				for (int j = 0; j <= i; j++) {
					result_vector[j] = j;
				}
			}
		}

		for (int i = 0; i < len-1; i++) {
			if (result_vector[i] >= 10) {
				result_vector[i+1]+=(result_vector[i] / 10);
				result_vector[i] %= 10;
			}

		}

		if (result_vector[len - 1] >= 10) {
			int j;
			for (j = 0; j < len; j++) {
				result_vector[j] = j;
			}
			result_vector.push_back(j);
			continue;
		}

		if (len == 10) break;
	}

	if (n == 0) {
		result = 0;
		for (int i = 0; i < result_vector.size(); i++) {
			result+=(result_vector[i] * mul);
			mul *= 10;
		}
	}
	cout << result<<'\n';
	return 0;
}



