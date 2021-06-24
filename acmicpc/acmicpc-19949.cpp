#include <iostream>
#include <vector>

using namespace std;

int answer[10]={0};
vector <int> input;
int count=0;
int sum=0;
void f(int n){
	if(n==0){
		for(int i=0;i<10;i++){
			if(input[i]==answer[i]) sum++;
		}

		if(sum>=5) count++;
		sum=0;
		return;
	}

	
	for(int i=0;i<5;i++){
		if(n<9&&input[input.size()-2]==input[input.size()-1]&&input[input.size()-1]==i+1) continue;
		input.push_back(i+1);
		f(n-1);
		input.pop_back();
	}
	return;
}

int main(void){

	for(int i=0;i<10;i++) cin>>answer[i];
	f(10);
	cout<<count;
	return 0;
}
