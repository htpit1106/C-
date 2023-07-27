#include<iostream>
using namespace std;

typedef int T;
struct Node{
	T elem;
	Node * next;
};

struct List{
	Node * head;
};

void listInit(List &list);
bool listIsEmpty(List &list);
void listPopFront(List &list);
void listDestroy(List &list);
void listPushFront(List &list, T e);
int main(){
	List list;
	listInit(list);
	listPushFront(list, 4);
	listPushFront(list, 8);
	listPushFront(list, 12);
	listPushFront(list, 16);
	return 0;
}
void listPushFront(List &list, T e){
	Node * v = new Node;
	v->elem = e;
	v->next = list.head;
	list.head = v;
}

void listPopFront(List &list){
	Node * old = list.head;
	list.head = list.head->next;
	delete old;
}

void listDestroy(List &list){
	while (listIsEmpty(list))
		listPopFront(list);
}

bool listIsEmpty(List &list){
	return list.head==NULL;
}

void listInit(List &list){
	list.head = NULL;
}
