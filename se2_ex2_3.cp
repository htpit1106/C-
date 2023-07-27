#include<iostream>

using namespace std;
double tong(int n);
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Ket qua: "<<tong(3);
	
	return 0;
}
double tong (int n){
	if (n==0) return 0;
	return tong(n-1) + 2*n;
}
