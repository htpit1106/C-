#include<iostream>
using namespace std;

typedef int T;

struct CNode{
	T elem;
	CNode * next;
};

struct CList{
	CNode * cursor;
};

void clistInit(CList &list);
void clistDestroy(CList &list);
bool clistIsEmpty(CList &list);
T clistFront(CList &list);
T clistBack(CList  &list);

int main(){
	
	
	return 0;
}

void clistInit(CList &list){
	list.cursor = NULL;
	
}
void clistDestroy(CList &list){
	if (clistIsEmpty(list)){
		delete list.cursor;
		return;
	}
	
	CNode * current = list.cursor->next;
	while(current !=list.cursor){
		CNode * temp = current;
		current = current->next;
		delete temp;
	}
	delete list.cursor;
	
} 

bool clistIsEmpty(CList &list){
	return(list.cursor = NULL);
}
 
