#include<iostream>
#include<math.h>

using namespace std;
double tong(int n, int x);
int main(){
	int n, x;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Ket qua: "<<tong(n, x);
	
	return 0;
}
double tong(int n, int x){
	if (n==0) return 1;
	return tong(n-1, x) +pow(x,n);
}
