#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int x_move[4] = { -1,0,0,1 };
int y_move[4] = { 0,1,-1,0 };
int map[25][25] = { 0 };
bool visited[51][51] = { 0 };
int count = 0;
int num = 0;
vector <int> num_of_apt;
void bfs(int n) {
	queue <pair <int, int>> q;
	pair <int, int> v;
	int i = 0, j = 0;
	int flag = 0;
	while (true) {
		for (; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (!visited[i][j] && map[i][j]) {
					v = { i,j };
					flag = 1;
					break;

				}
			}
			if (flag) {
				flag = 0;
				break;
			}
		}

		if (i >= n) break;

		num = 0;
		q.push(v);
		visited[v.first][v.second] = 1;
		while (!q.empty()) {
			v = q.front();
			q.pop();
			num++;
			for (int k = 0; k < 4; k++) {
				if (v.first + x_move[k] >= 0 && v.first + x_move[k] < n&&v.second + y_move[k] >= 0 && v.second + y_move[k] < n&&map[v.first + x_move[k]][v.second + y_move[k]] && !visited[v.first + x_move[k]][v.second + y_move[k]]) {
					q.push({ v.first + x_move[k] ,v.second + y_move[k] });
					visited[v.first + x_move[k]][v.second + y_move[k]] = 1;
				}

			}
		}
		num_of_apt.push_back(num);
		::count++;

	}
	return;
}

int main(void) {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	bfs(n);
	sort(num_of_apt.begin(), num_of_apt.end());
	cout << ::count << '\n';
	for (int i = 0; i < num_of_apt.size(); i++) {
		cout << num_of_apt[i] << '\n';
	}

	return 0;
}
