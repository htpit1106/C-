#include<iostream>

using namespace std;
void nhap_mang(float a[][100], int &n){
	cin>>n;
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			cin>>a[i][j];
}

void xuat_mang(float a[][100], int n){
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			cout<<a[i][j];
}

float sum(float a[][100], int n){
	float t= 0;
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			if (a[i][j] > 2.5 && a[i][j]<5) t += a[i][j];
	return t;
}

float min(float a[][100], int n){
	float min = a[0][0];
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			if (min> a[i][j]) min = a[i][j];
	return min;
}

void duong_cheo(float a[][100], int n){
	for (int i = 0; i<n; i++)
		if (a[i][n-1-i] + a[i+1][n-i-2] == 4) 
			cout<<a[i][n-1-i]<<"\t"<<a[i+1][n-i-2]<<endl;
}

int main(){
	float a[100][100];
	int n;
	nhap_mang(a, n);
	duong_cheo(a, n); 
	
}
