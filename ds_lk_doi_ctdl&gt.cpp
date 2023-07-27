#include<iostream>
using namespace std;

typedef int T;
struct DNode {
	t elem;
	DNode * next;
	DNode * prev;
}

struct DList{
	DNode * header;
	DNode * trailer;
	DNode * currentPos;
};

void dlistInit(DList &list);
void dlistDestroy(DList &list);
bool dlistIsEmpty(DList &list);
T dlistFront(DList &list);
T dlistBack(DList &list);
T dlistCurrent(DList &list)
void dlistMoveNext(DList &list);
void dlistMovePre(DList &list);
void dlistMoveFront(DList &list);
void dlistMoveBack(DList &list);
int main(){
	
	
	return 0;
}

void dlistInit(DList &list){
	list.header = new DNode;
	list.trailer = new DNode;
	list.header->Next = list.trailer;
	list.trailer->prev = list.header;
	list.currenntPos = list.header;
	
}

void dlistDestro
