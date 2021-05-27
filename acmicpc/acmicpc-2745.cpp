#include <iostream>
#include <string>
using namespace std;
int main(void){
	string n;
	int b;
	int mul=1;
	int result=0;
        char ch[36]={'0','1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	cin>>n>>b;

	for(int i=n.size()-1;i>=0;i--){
		int j;
		for(j=0;j<36;j++) {
			if(ch[j]==n[i]) break;
		}

		result+=(mul*j);
		mul*=b;
	}

	cout<<result;
	
	return 0;
}
