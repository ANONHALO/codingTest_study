#include <iostream>

using namespace std;

int main(void){

	int a,b,tmp;
	int gcd,lcm;
	int a_tmp,b_tmp;
	cin>>a>>b;
	a_tmp=a; b_tmp=b;

	if(a<b) swap(a,b);

	while(b!=0){
		tmp=a%b;
		a=b;
		b=tmp;	
	}
	gcd=a;
	lcm=gcd*(a_tmp/gcd)*(b_tmp/gcd);

	cout<<gcd<<'\n'<<lcm;


	return 0;
}
