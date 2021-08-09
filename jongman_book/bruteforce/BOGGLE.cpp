#include <iostream>
#include <vector>
#include <string>
using namespace std;

char map[5][6] = { "URLPM","XPRET","GIAET","XTNZY","XOQRS" };
char map2[5][6] = { "NNNNN","NEEEN","NEYEN","NEEEN","NNNNN" };


int x_move[8] = {-1,-1,-1,0,0,1,1,1};
int y_move[8] = {-1,0,1,-1,1,-1,0,1};
string input;

bool boggle(int x, int y, int tofind) {

	if (tofind == 0) return true;
	if (x < 0 || x>5 || y < 0 || y>5 || map2[x][y] != input[input.size() - tofind]) return false;

	for (int i = 0; i < 8; i++) {
		if (boggle(x + x_move[i], y + y_move[i], tofind - 1)) return true;
	}

	return false;
}



bool solve(void) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (boggle(i, j, input.size())) return true;
		}
	}

	return false;
}


int main(void) {

	cin >> input;

	if (solve()) cout << "found";
	else cout << "not found";

	return 0;
}
