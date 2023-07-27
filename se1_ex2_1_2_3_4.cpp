#include<iostream>

using namespace std;

void nhap_mang(int a[], int n){
	for (int i = 0; i<n; i++ ){
	
		cout<<"a["<<i<<"] = ";
		 cin>>a[i];
}
}

void xuat_mang(int a[], int n){
	for (int i = 0; i<n; i++)
		cout<<a[i]<<"\t";
}

int tong(int a[], int n ){
	int tong = 0;
	for (int i = 0; i<n; i++)
		tong += a[i];
	
	return tong;
}

int dem_so_am(int a[], int n){
	int dem_so_am = 0;
	for (int i = 0; i<=n; i++)
		if (a[i]<0 )dem_so_am++;
		
	return dem_so_am;
}


int main(){
	int n, a[100];
	cout<<"Nhap n: "; cin>>n;
	nhap_mang(a, n);
	xuat_mang(a, n);
	tong(a, n);
	dem_so_am(a, n);
	
	return 0;
}
