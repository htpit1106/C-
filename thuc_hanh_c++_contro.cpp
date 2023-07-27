#include<iostream>
using namespace std;
float *nhap_mang(float *p, int &n){
	cout<<"Nhap N: "; cin>>n;
	p = new float[n];
	for (int i=0; i<n; i++){
		cout<<"a["<<i<<"]="; cin>>*(p+i);
	}
	return p;	
}

float *xuat_mang(float *p, int &n){
	for(int i=0; i<n; i++){
		cout<<*(p+i)<<"\t";
	}
	return p;
}
float max(float *p, int &n){
	int max = *p;
		for (int i = 0; i<n; i++)
		if (*(p+i)>max) {
			max = *(p+i);
		}
		return max;
}

int d_max(float *p, int &n){
	int d_max = 0;
	int pmax = max(p,n);
	for (int i = 0; i<n; i++){
		if (p[i]==pmax) d_max++;
	}

	return d_max;
}


float *xoa(float *p, int &n, int k){
	for (int i = k-1; i<n; i++){
		
		*(p+i) = *(p+i+1);
	}
	n--;
	return p;
}
// chen x vao vi tri max dau tien
float *insertX(float *p, int &n, float x){
	n++;
	int pmax = max(p,n);
	int i_max;
	for (int i = 0; i<n; i++)
		if (p[i]==pmax){
			i_max = i;
			break;
		}
		
	for (int i = n; i>i_max; i--)
	{
		p[i]= p[i-1];
	}
	p[i_max] = x;
	return p;
}

float *pop_all_x(float *p, int &n, int x){
	int i =0;
	while (i<n)	{
		if (p[i] ==x ) 
		 xoa(p,n,i+1);
		else i++;
	}
	return p;
}

int main(){
	float *p; int n;
	
	p = nhap_mang(p,n);
	p = xuat_mang(p,n);
//	cout<<"dem: "<<d_max(p,n);
//	p = xoa(p,n,2);
//	cout<<endl;
//	p = xuat_mang(p, n);
//	p = insertX(p,n,5);
//	cout<<endl;
//	p = xuat_mang(p,n);
	p = pop_all_x(p,n,3);
	cout<<endl;
	p = xuat_mang(p,n);

	return 0;
} 
