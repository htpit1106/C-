#include<iostream>
using namespace std;

typedef int T;

struct Vector{
	int size;
	int capacity;
	T * array; // khoi tao con tro array tro toi cac phan tu kieu T
};
// cac ham
void VecInit(Vector &vec, int initCapacity);
void vecDestroy(Vector &vec);
void vecCopy(Vector &vec, Vector &vec2);
int getSize(Vector &vec);
bool vecIsEmpty(Vector &vec);
T vecGetElem(Vector &vec, int index);
void  vecSetEllem(Vector &vec, int index, int newValue);
void vecExpand(Vector & vec, int newCapacity);

int main(){
	Vector vec, vec2; 
	VecInit(vec, 16);
	VecInit(vec2,32);
	vecCopy(vec, vec2);
	cout<<vec.capacity<<endl;
	cout<<vecIsEmpty(vec);
	return 0;
} 
T vecGetElem(Vector &vec, int index){
	return  vec.array[index];
}
void  vecSetEllem(Vector &vec, int index, int newValue){
	vec.array[index] = newValue;
}

bool vecIsEmpty(Vector &vec){
	return vec.size == 0;
}
void VecInit(Vector &vec, int initCapacity ){
	vec.size = 0;
	vec.capacity = initCapacity;
	vec.array = new T[vec.capacity]; // khoi tao mang chua phan tu
	
}
void vecDestroy(Vector &vec){
	delete[] vec.array;
	
}
// sao chep vector
void vecCopy(Vector &vec, Vector &vec2){
	vec.size = vec2.size;
	vec.capacity = vec2.capacity;
	delete[]  vec.array;
	vec.array = new T[vec.capacity];
	for (int i = 0; i<vec.size; i++)
	vec.array[i] = vec2.array[i];
	
}

int getSize(Vector &vec){
	return vec.size;
}
