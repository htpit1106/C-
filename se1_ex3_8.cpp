#include<iostream>

using namespace std;
void nhap_mang(int a[][100], int n);
void xuat_mang(int a[][100], int n);
void sap_xep(int a[][100], int n);

int main(){
	int a[100][100], n;
	cout<<"Nhap n:"; cin>>n;
	nhap_mang(a, n);
	xuat_mang(a, n);
	sap_xep(a, n);
	xuat_mang(a, n);
	
	
	return 0;
	
}
void sap_xep(int a[][100], int n){
	int t;
	for (int i=0; i<n; i++)
	for(int j=0; j<n-1; j++)
	{
		for (int k=j+1;k<n; k++)
		if (a[i][j]<a[i][k]){
			
			t = a[i][j];
			a[i][j] = a[i][k];
			a[i][k] = t;
		}
	}
}
void nhap_mang(int a[][100], int n){
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
		{
		cout<<"a["<<i<<"]["<<j<<"]="; cin>>a[i][j];
	}
}
void xuat_mang(int a[][100], int n){
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<n; j++)
				cout<<a[i][j]<<"\t";
				cout<<endl;
	}
}


