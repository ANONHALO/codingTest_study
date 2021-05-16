#include <iostream>
#include ".\mylinked_list.h"

using namespace std;

int main(void){
	List mylist;
	int output;

	LInit(&mylist);
	LInsert(&mylist,1);
	LInsert(&mylist,2);
	LInsert(&mylist,3);
	LInsert(&mylist,4);
	LInsert(&mylist,5);

	cout<<output;

	
	
	return 0;

}
