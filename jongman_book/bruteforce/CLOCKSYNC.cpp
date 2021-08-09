#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector <int>> button = {
	{0,1,2},{3,7,9,11},{4,10,14,15},{0,4,5,6,7},{6,7,8,10,12},{0,2,14,15},{3,14,15},{4,5,7,14,15},{1,2,3,4,5},{3,4,5,9,13}
};

int button_clicked[10] = { 0 };
int sum = -1;


bool test(vector <int> &clock) {
	for (int i = 0; i < 16; i++) {
		if (clock[i] % 12 != 0) return false; 
	}
	return true;
}

void click(vector <int> &clock,int now) {

	if (test(clock)) {
		int tmp = 0;
		for (int i = 0; i < 10; i++) tmp += button_clicked[i];
		if (sum == -1&&tmp!=0) sum = tmp;
		else sum = min(sum, tmp);
		return;
	}


	for (int i = now; i < 10; i++) {
		if (button_clicked[i] < 3) {
			button_clicked[i]++;
			for (int j = 0; j < button[i].size(); j++) {
				clock[button[i][j]] += 3;
			}

			click(clock, i);

			button_clicked[i]--;
			for (int j = 0; j < button[i].size(); j++) {
				clock[button[i][j]] -= 3;
			}
		}
	}

	return;
}

int main(void) {
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		vector <int> clock(16);
		for (int j = 0; j < 16; j++) cin >> clock[j];
		click(clock, 0);
		cout << "result : " << sum << '\n';
		sum = 0;
		fill_n(button_clicked, 10, 0);
	}
	return 0;
}

