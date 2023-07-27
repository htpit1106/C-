#include <iostream>
using namespace std;
void nhap_mang(int a[], int n, int i);
void xuat_mang(int a[], int n, int i);
long tong(int a[], int n, int i);
long dem(int a[], int n, int i) ;
long tong_duong(int a[], int n, int i);
int max(int a[], int n, int i); 
int main(){
	int a[100],  n;
	cout<<"Nhap n: "; cin>>n;
	nhap_mang(a, n, 0);
	xuat_mang(a, n, 0);
	cout<<endl<<tong(a, n, 0);
	cout<<endl<<dem(a, n, 0);
	cout<<endl<<"tong so duong: "<<tong_duong(a, n, 0);
	
	return 0;
}

long tong_duong(int a[], int n, int i){
	if (i<n)
		if (a[i]>0)return tong(a, n, i+1) + a[i];
		else i++;
	else return 0;
} 

long dem(int a[], int n, int i){
	if (i< n)
		if (a[i]<0) return dem(a,n, i+1) +1;
		else dem(a, n, i+1);
	else return 0;
}
long tong(int a[], int n, int i){
	if (i<n)
	return tong(a, n, i+1) + a[i];
	else return 0;
} 

void xuat_mang(int a[], int n, int i){
	if (i<n) cout<<a[i]<<"\t";
	else return ;
	xuat_mang(a, n, i+1);
}
	

void nhap_mang(int a[], int n, int i){
	if (i<n){
	
	cout<<"a["<<i<<"]=";
	cin>>a[i];
	}
	else return;
	nhap_mang(a,n, i+1);
}



