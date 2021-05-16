#include ".\mylinked_list.h"
#include <stdio.h>
#include <stdlib.h>

void LInit(List * list){
	list->head=(Node *)malloc(sizeof(Node));
	list->head->pnext=NULL;
	list->numofdata=0;
};


int LFirst(List * list,LData * data){
	if(list->head->pnext==NULL) return false;
	else {
		list->before=list->head;
		list->cur=list->head->pnext;
		*data=list->cur->data;
		return true;
	}
};
int LNext(List * list,LData * data){
	if(list->cur==NULL) return false;
	else{
		list->before=list->cur;
		list->cur=list->cur->pnext;
		*data=list->cur->data;
		return true;
	}

};
void LInsert(List *list, LData data){
	Node * newNode=(Node *)malloc(sizeof(Node));
	newNode->data=data;
	newNode->pnext=list->head->pnext;
	list->head->pnext=newNode;
	list->numofdata++;
};
LData LRemove(List * list){
	Node * delNode=list->cur;
	LData ret=list->cur->data;
	list->before->pnext=list->cur->pnext;
	free(delNode);
	list->cur=list->before;
	list->numofdata--;
	return ret;

		
};
int LCount(List * list){
	return list->numofdata;
};

