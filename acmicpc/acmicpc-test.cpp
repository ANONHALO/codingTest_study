#include <iostream>
#include <vector>
using namespace std;
int main(void){

	vector <vector <int>> test(2,vector <int> (3));

	test[0]={1,2,3};
	test[1]={4,5,6};



	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<test[i][j];

		}
	}
	return 0;
}
