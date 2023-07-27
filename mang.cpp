#include<iostream>
#include<math.h>
using namespace std;
void Nhap_mang(int a[100],int n){
	for(int i=0; i < n ;i++){
		cout<<"a["<< i<< "] = "; cin>>a[i]; 
	} 
}
void Xuat_mang(int a[], int n){
	for (int i = 0; i < n; i++)
		cout<<a[i]<<endl;
}
void sap_xep(int a[], int n){
	int t;
	for (int i = 0; i < n-1; i++){
		for(int j = i+1 ; j < n; j++)
			if (a[j] < a[i]){
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
	}
}
void  max(int a[], int n){
	sap_xep(a,n);
}

int main(){
	int a[100], n;
	cout<<"Nhap n:"; cin>>n;
	Nhap_mang(a, n);
	Xuat_mang(a, n);
	max(a, n);
	Xuat_mang(a, n);




	return 0;
}
