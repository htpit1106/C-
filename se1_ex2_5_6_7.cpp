#include<iostream>
#include<math.h>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
}
bool ktr_cp(int n){
	if (sqrt(n)-round(sqrt(n))==0) 
		return true;
	else return false;
}
double tbc(int a[], int n){
	int t=0, d=0;
	for (int i=0; i<n; i++)
		if (ktr_cp(a[i])) {
			t += a[i];
			d +=1;
			cout<<a[i]<<"\t";
		}
		cout<<endl;
	return (float)t/d;
}
int main(){
	int n;
	cout<<"Nhap n: "; cin>> n;
	int a[100];
	nhap_mang(a, n);
	cout<<tbc(a, n);

	
	return 0;
}
