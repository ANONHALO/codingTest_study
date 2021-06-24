#include <iostream>
#include <queue>
using namespace std;

int n, m;
int x_move[4] = { -1,0,0,1 };
int y_move[4] = { 0,1,-1,0 };
int gph[100][100] = { 0 };
bool visited[100][100] = { 0 };
void bfs(pair <int, int> v) {
	queue <pair <int, int>> q;
	q.push(v);
	int first, second;
	while (!q.empty()) {

		first = q.front().first;
		second = q.front().second;
		visited[first - 1][second - 1] = 1;

		for (int i = 0; i < 4; i++) {
			if (first + x_move[i] > 0 && first + x_move[i] <= n && second + y_move[i] > 0 && second + y_move[i] <= m) {
				if (!visited[first + x_move[i] - 1][second + y_move[i] - 1] && gph[first + x_move[i] - 1][second + y_move[i] - 1]) {
					visited[first + x_move[i] - 1][second + y_move[i] - 1] = 1;
					q.push({ first + x_move[i], second + y_move[i] });
					gph[first + x_move[i] - 1][second + y_move[i] - 1] = gph[first - 1][second - 1] + 1;
				}

			}
		}

		q.pop();
	}


	return;


}

int main(void) {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &gph[i][j]);
		}
	}

	bfs({ 1,1 });
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<gph[i][j]<<"  ";
		}
		cout<<'\n';
	}
	cout << gph[n - 1][m - 1];
	return 0;
}
