#include <iostream>
#include <vector>
#define INF 100
using namespace std;

bool picked[11] = { false };
int n;
int count = 0;

void pick(vector <vector <int>> &friends) {

	int now=INF;
	for (int i = 0; i < n; i++) {
		if (picked[i] == false) {
			now = i;
			break;
		}
	}

	if (now == INF) {
		::count++;
		return;
	}

	picked[now] = true;
	// int ret=0;
	for (int i = 0; i < friends[now].size(); i++) {
		if (picked[friends[now][i]] == false) { // if(!taken[pairWith]&&areFriends[firstFree][pairWith])
			picked[friends[now][i]] = true;    // taken[firstFree]=taken[pairWith]=true; 
			pick(friends);                    //ret+=pick(friends);
			picked[friends[now][i]] = false;// taken[firstFree]=taken[pairWith]=false; 
		}

	}

	picked[now] = false;

	//return ret;
	return;
}

int main(void) {
	int c, m;
	int a, b;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> n >> m;
		vector <vector <int>> friends(n);
		for (int j = 0; j < m; j++) {
			cin >> a >> b;
			if (a > b) {
				friends[b].push_back(a);
			}
			else {
				friends[a].push_back(b);
			}
		}

		pick(friends);
		cout <<"result : " <<::count<<'\n';
		::count = 0;
		fill_n(picked, 11, false);
	}
	return 0;
}
