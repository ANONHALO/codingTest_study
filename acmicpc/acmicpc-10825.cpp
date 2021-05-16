#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class student{
	public:
		int hangul;
		int english;
		int math;
		string name;
		
		student(string name,int hangul,int english,int math)
		{
			this->name=name;
			this->hangul=hangul;
			this->english=english;
			this->math=math;
		}
	
};

bool compare(student a, student b){
	if(a.hangul>b.hangul) return a.hangul>b.hangul;
	else if(a.hangul==b.hangul&&a.english>
	
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
