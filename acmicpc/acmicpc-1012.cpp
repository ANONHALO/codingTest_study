#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int x_move[4] = { -1,0,0,1 };
int y_move[4] = { 0,1,-1,0 };
int map[51][51] = { 0 };
bool visited[51][51] = { 0 };
int count = 0;
void bfs(int n, int m) {
	queue <pair <int, int>> q;
	pair <int, int> v;
	int i=0, j=0;
	while (i<n&&j<m) {
		for (; i < n; i++) {
			for (j=0; j < m; j++) {
				if (!visited[i][j]) {
					v = { i,j };
					break;
				}
			}
		}

		q.push(v);
		visited[v.first][v.second] = 1;
		while (!q.empty()) {
			v = q.front();
			q.pop();
			for (int k = 0; k < 4; k++) {
				if (v.first + x_move[k] >= 0 && v.first + x_move[k] < n&&v.second + y_move[k] >= 0 && v.second + y_move[k] < m&&map[v.first + x_move[k]][v.second + y_move[k]] && visited[v.first + x_move[k]][v.second + y_move[k]]) {
					q.push({ v.first + x_move[k] ,v.second + y_move[k] });
					visited[v.first + x_move[k]][v.second + y_move[k]] = 1;
				}
					
			}
		}
		::count++;

	}
	return;
}

int main(void) {
	int t, n, m, k;
	int x, y;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m >> k;
		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			map[x][y] = 1;
		}
		bfs(n,m);
		cout << ::count<<'\n';
		fill_n(map[0], (n*m), 0);
		fill_n(visited[0], (n*m), 0);
		::count = 0;
	}
	return 0;
}

