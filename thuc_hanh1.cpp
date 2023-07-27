#include<iostream>
using namespace std;

void nhap_mang(float a[], int n, int i){
	if (i>=n) return;
	cout<<"a["<<i<<"]=";
	cin>>a[i];
	nhap_mang(a, n, i+1);
	
}


void xuat_mang(float a[], int n, int i){
	if (i>=n) return ;
	cout<<a[i]<<"\t";
	xuat_mang(a, n, i+1);
}
float tong(float a[], int n){
	if (n==0) return 0;
	return tong(a+1, n-1) +a[0];
}

int dem(float a[], int n){
	if (n==0)	return 0;
	if (a[0]< 0)  return dem(a+1 , n-1) +1;
	else dem(a+1,n-1);
}

float tong_duong(float a[], int n){
	
	if(n==0) return 0;
	if (a[0]> 0) return tong_duong(a+1, n-1) + a[0];
	return tong(a+1, n-1);
}
float tim_max(float a[], int n, float max){
	if (n==0) return max;
	if (a[0]> max) max = a[0];
	tim_max(a+1, n-1, max);
}
float tim_min(float a[], int n, float min){
	if (n==0) return min;
	if (a[n-1]<min) min = a[n-1];
	tim_min(a, n-1, min);
}

int main(){
float  a[100], n;
	cout<<"Nhap n:"; cin>>n;
	nhap_mang(a, n, 0);

	xuat_mang(a, n, 0);
	cout<<"\ntong: "<<tong(a, n);
	cout<<"\nso am: "<<dem(a, n);
	cout<<"\ntong so duong: "<<tong_duong(a, n);
	cout<<"\nMax: "<<tim_max(a,n,a[0]);
	cout<<"\nMin"<<tim_min(a,n,a[0]);
	
	return 0;
}
