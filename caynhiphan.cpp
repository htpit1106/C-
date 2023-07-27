#include<iostream>

using namespace std;

typedef int T;


struct BinaryNode{
	T elem;
	BinaryNode * left;
	BinaryNode * right;
};

struct BinarySearchTree{
	BinaryNode * root;
};
void bstInit(BinarySearchTree & tree);
void bstDestroy(BinarySearchTree & tree);
void bstMakeempty(BinaryNode * &t);
void bstMakeEmpty(BinarySearchTree & tree);

int main(){
	return 0;
}


void bstMakeEmpty(BinaryNode * &t){
	if ( t==NULL) return;
	bstMakeempty(t->left);
	bstMakeempty(t->right);
	delete t;
	t = NULL;

}

void bstInit(BinarySearchTree & tree){
	tree.root = NULL;
}

void bstDestroy(BinarySearchTree & tree){
	bstMakeEmpty(tree);
}
