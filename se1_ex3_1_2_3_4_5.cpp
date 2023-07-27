#include<iostream>

using namespace std;
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
long tong(int a[][100], int n){
	int tong=0;
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				tong +=a[i][j];
	return tong;
	
} 
int max(int a[][100], int n){
 	int max = a[0][0];
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				if (a[i][j]>max) max = a[i][j];
	return max;
	
}
int dem_so_am(int a[][100], int n){
	int  dem;
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				if (a[i][j]<0) dem++;
		return dem;
}
int main(){
	int a[100][100], n;
	cout<<"Nhap n: "; cin>>n;
	nhap_mang(a, n);
	xuat_mang(a, n);
	cout<<"Tong: "<<tong(a, n);
	cout<<"Max: "<<max(a, n);
	cout<<"So am trong mang: "<<dem_so_am(a, n);
	
	
	return 0;
}
