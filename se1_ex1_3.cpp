#include<iostream>

using namespace std;
long sum(int n){
	long  sum=1;
	for(int i=1; i<=n; i++){
		sum += 3*i;
	}
	return sum;
}

int main(){
	int n;
	cout<<"Nhap n:"; cin>>n;
	cout<<"Ket qua: "<<sum(n);
	
	return 0;
}
