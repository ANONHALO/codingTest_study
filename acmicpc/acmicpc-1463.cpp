#include <iostream>

using namespace std;


int count[1000001];

int op(int n){
	if(count[n]!=-1) return count[n];
	
	if(n%3==0){
		if(count[n/3]!=-1&&count[n-1]!=-1)
			count[n]=min(count[n/3]+1,count[n-1]+1);
		else
			count[n]=min(op(n/3)+1,op(n-1)+1);
		return count[n];
	}
	else if(n%2==0){
		if(count[n/2]!=-1&&count[n-1]!=-1)
			count[n]=min(count[n/2]+1,count[n-1]+1);
		else
			count[n]=min(op(n/2)+1,op(n-1)+1);
		return count[n];
	}
	else {
		if(count[n-1]!=-1) count[n]=count[n-1]+1;
		else count[n]=op(n-1)+1;
		return count[n];
	}
}
int main(void){
	int n;
	fill_n(count,1000001,-1);
	count[0]=count[1]=0;
	count[2]=count[3]=1;
	cin>>n;
	cout<<op(n);


	return 0;
}
