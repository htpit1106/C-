#include<iostream>
#include<math.h>
using namespace std;

float giai_thua(float n){
	float giaithua =1;
	for (int i=1; i<= n; i++){
		giaithua = giaithua*i;
	}
	return giaithua;
}
float tongS (int x, int n){
	float s=1;
	for(int i=1; i<=n; i++)
		s += (pow(x,i))/giai_thua(i);
	return s;
}

int main(){
	float x, n;
	cout<<"Nhap x:"; cin>>x;
	cout<<"Nhap n: "; cin>>n;	
	cout<<"ket qua: "<<tongS(x,n);
	return 0;
	
	return 0;
}
