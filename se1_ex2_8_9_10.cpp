#include<iostream>
#include<math.h>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
}
int i_max(int a[], int n){
	int i_max = 0, max = a[0];
	for (int i=0; i<n; i++)
		if (a[i]>max) i_max = i;
	return i_max;
	
}
int i_min(int a[], int n){
	int i_min = 0, min = a[0];
	for (int i=0; i<n; i++)
		if (a[i]<min) i_min = i;
	return i_min;
	
}

void min_to_max (int a[], int n){
	for (int i=i_min(a, n)+1; i<i_max(a, n); i++)
		cout<<a[i]<<"\t";
	
}
int main(){
	int n, a[100];
	cout<<"Nhap n: "; cin>> n;
	nhap_mang(a, n);
	cout<<"Max: "<<a[i_max(a, n)]<<endl;
	cout<<"MIn: "<<a[i_min(a, n)]<<endl;
	min_to_max(a, n);


	
	return 0;
}
