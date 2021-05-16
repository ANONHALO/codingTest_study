#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/*class student{
	public:
		int age;
		string name;

		student(int age,string name){
			this->age=age;
			this->name=name;
		}
	
};
*/
bool compare(pair<int,string> a,pair<int,string> b){
	return a.first<b.first;
}
int main(void){
	
	int n;
	int age;
	string name;
	cin>>n;
	
	vector <pair<int,string>> students;
	


	for(int i=0;i<n;i++){
		cin>>age>>name;
		students.push_back(pair<int,string>(age,name));
	}
	
	stable_sort(students.begin(),students.end(),compare);

	for(int i=0;i<students.size();i++){
		cout<<students[i].first<<' '<<students[i].second<<'\n';
	}
	return 0;
}
