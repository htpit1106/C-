#include<iostream>
#include<math.h>

using namespace std;
long sum(int n, int x){
	long  sum=0;
	for(int i=0; i<=n; i++){
		sum += pow(x,i);
	}
	return sum;
}

int main(){
	int n, x;
	cout<<"Nhap n:"; cin>>n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Ket qua: "<<sum(n,x);
	
	return 0;
}
