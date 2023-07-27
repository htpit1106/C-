#include<iostream>

using namespace std;
double sum(int n){
	float sum=0;
	for(int i=1; i<=n; i++){
		sum += 1.0/2/i;
	}
	return sum;
}

int main(){
	int n;
	cout<<"Nhap n:"; cin>>n;
	cout<<"Ket qua: "<<sum(n);
	
	return 0;
}
