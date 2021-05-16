#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(void){
	
	int n;
	vector <pair<int, int>>input;
	int tmp_x,tmp_y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp_x>>tmp_y;
		input.push_back(Position(pair<int,int>(tmp_x,tmp_y)));
	}
	
	

	:





	for(int i=0;i<input.size();i++){
		cout<< input[i].x<<' '<<input[i].y<<'\n';
	}

	return 0;
}
