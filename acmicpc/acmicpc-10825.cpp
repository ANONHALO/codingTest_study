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

bool compare(student &a, student &b){
	if(a.hangul>b.hangul) return true;
	else if (a.hangul<b.hangul) return false;
	else {
		if(a.english<b.english) return true;
		else if(a.english>b.english) return false;
		else{
			if(a.math>b.math) return true;
			else if(a.math<b.math) return false;
			else{
				if(a.name<b.name) return true;
				else return false;
			}
		}
	}
	
}
int main(void){
	
	int n;
	int hangul,english,math;
	string name;
	cin>>n;
	vector <student> students;

	for(int i=0;i<n;i++){
		cin>>name>>hangul>>english>>math;
		students.push_back(student(name,hangul,english,math));	
	}
	
	sort(students.begin(),students.end(),compare);

	for(int i=0;i<students.size();i++){
		cout<<students[i].name<<'\n';
	}
	return 0;
}
