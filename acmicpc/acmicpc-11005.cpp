#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	int n,b;
	char ch[36]={'0','1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	string result;
	cin>>n>>b;

	while(n!=0){
		result+=ch[n%b];
		n/=b;
	}

	reverse(result.begin(),result.end());
	cout<<result;
	return 0;
}
