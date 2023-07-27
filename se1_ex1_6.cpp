#include<iostream>
#include<math.h>

using namespace std;
long gt(int n){
	if (n==0 || n==1) return 1;
	
	return gt(n-1)*n;
}
double sum(int n, int x){
	double sum =0;
	for (int i = 0; i <= n; i++)
		sum += float(pow(x, 2*i)/gt(2*i));
	
	return sum;
}
int main(){
	int n, x;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap x: "; cin>>x;
	cout<<sum(n,x)<<endl;
	cout<<gt(4);
	
	
	return 0;
}
