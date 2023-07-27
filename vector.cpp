#include<iostream>

using namespace std;
typedef int T;
struct Vector{
	int size;
	int capacity;
	T * array;
};
void initVector(Vector &vec, int newcCapacity=16);

void vecDestroy(Vector &vec);

void vecCopy(Vector &vec, Vector &vec2);

int getSize(Vector &vec);

bool vecIsEmpty(Vector &vec);

T vecGetElem(Vector &vec, int index);

void  vecSetEllem(Vector &vec, int index, int newValue);

void vecPushBack(Vector & vec, T newElement);

void vecInsert(Vector & vec, int pos, T newElement);

void vecPopBack(Vector & vec);

void vecClear(Vector & vec) ;

int main(){


}
void initVector(Vector &vec, int newCapacity){
	vec.size = 0;
	vec.capacity = newCapacity;
	vec.array = new T[vec.capacity];
}
void vecDestroy(Vector &vec){
	delete [] vec.array;
}
void vecCopy(Vector &vec, Vector &vec2){
	if (&vec != &vec2){
		vec.size = vec2.size;
		vec.capacity = vec2.capacity;
		delete [] vec.array;
		vec.array = new T[vec.capacity];
		for (int i = 0; i<vec.size; i++)
			vec.array[i] = vec2.array[i];
	}
}
int getSize(Vector &vec){
	return vec.size;
}
bool vecIsEmpty(Vector &vec){
	return vec.size==0;
}
T vecGetElem(Vector &vec, int index){
	return vec.array[index];
}
void  vecSetEllem(Vector &vec, int index, int newValue){
	vec.array[index] = newValue;
}
void vecExpand(Vector & vec, int newCapacity){
	if (newCapacity < vec.capacity) return;
	T * old = vec.array;
	vec.capacity = newCapacity;
	vec.array = new T[vec.capacity];
	for (int i = 0; i<vec.size; i++)
		vec.array[i] = old[i];
	delete old;
}
void vecPushBack(Vector & vec, T newElement){
	if (vec.size == vec.capacity) vecExpand(vec, vec.capacity*2);
	vec.array[vec.size] = newElement;
	vec.size++;
	
}
void vecInsert(Vector & vec, int pos, T newElement){
	if (vec.size == vec.capacity) vecExpand(vec, vec.capacity * 2);
	for (int i = vec.size; i>pos; i--)
		vec.array[i] = vec.array[i-1];
	vec.array[pos] = newElement;
	vec.size++;
}

void vecPopBack(Vector & vec){
	vec.size--;
}
void vecClear(Vector & vec) {
	vec.size = 0;
}
