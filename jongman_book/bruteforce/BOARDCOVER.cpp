#include <iostream>
#include <vector>

using namespace std;
int h, w;
int count = 0;
int px[4][2] = { {1,0},{0,1},{1,1}, {1,1} };
int py[4][2] = { {0,1},{1,1},{0,-1},{0,1} };

pair <int,int> find(vector <string> &map) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == '.') return { i,j };
		}
	}

	return { -1,-1 };
}

void f(vector <string> &map){

	pair <int, int> now = find(map);

	if (now.first == -1 && now.second == -1) {
		::count++;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (now.first + px[i][0] >= 0 && now.first + px[i][0] < h&& now.first + px[i][1] >= 0 && now.first + px[i][1] < h&&now.second + py[i][0] >= 0 && now.second + py[i][0] < w&&now.second + py[i][1] >= 0 && now.second + py[i][1] < w) {
			if ((map[now.first + px[i][0]][now.second + py[i][0]] == '.') && (map[now.first + px[i][1]][now.second + py[i][1]] == '.')) {
				map[now.first][now.second] = map[now.first + px[i][0]][now.second + py[i][0]] = map[now.first + px[i][1]][now.second + py[i][1]] = '#';
				f(map);
				map[now.first][now.second] = map[now.first + px[i][0]][now.second + py[i][0]] = map[now.first + px[i][1]][now.second + py[i][1]] = '.';

			}
		}
	}

	return;
}
int main(void) {
	vector<string> map1={ "#.....#", "#.....#", "##...##" };
	vector<string> map2 = { "#.....#","#.....#","##..###" };
	vector<string> map3 = { "##########","#........#","#........#" ,"#........#" ,"#........#" ,"#........#" ,"#........#" ,"##########" };

	cin >> h >> w;
	f(map1);
	cout << "result : " << ::count << '\n';
	::count = 0;
	cin >> h >> w;
	f(map2);
	cout << "result : " << ::count << '\n';
	::count = 0;
	cin >> h >> w;
	f(map3);
	cout << "result : " << ::count << '\n';
	::count = 0;

	return 0;
}
