#ifndef __MYLINKEDLIST_H__
#define __MYLINKEDLIST_H__


#include <stdio.h>


typedef int NData;

typedef struct MYNODE{
	NData data;
	struct MYNODE * pnext;

}Node;


typedef struct MYLINKED_LIST{
		Node * head;
		Node * cur;
		Node * before;
		int numofdata;
}LinkedList;

typedef LinkedList List;
typedef NData LData;


void LInit(List * list);
void LInsert(List *list, LData data);

int LFirst(List * list,LData *data);
int LNext(List * list,LData * data);

LData LRemove(List * list);
int LCount(List * list);




#endif
