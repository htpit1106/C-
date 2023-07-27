// tao 1 cau truc student gom id, name, subject, mark
// viet 1 hang nhap vao 1 ds gom n student
// in ra danh sach student 
//in ra ds sv co diem cao nhat
// nhapvao 1 id in ra thong tin cua sv co id vua nhap
// nhap vao 1 subject in ra ds cac sv co diem subject do

#include<iostream>
#include<string>

using namespace std;
struct sinhVien{
	string id;
	string name;
	string subject;
	float mark;
};

void nhap_1_sv(sinhVien &sv){
	cout<<"Id: "; cin>>sv.id;
	cin.ignore();
	cout<<"Name: "; getline(cin, sv.name);
	cout<<"subject: "; getline(cin, sv.subject);
	cout<<"mark: "; cin>>sv.mark;
}
void nhap_list_sv(sinhVien sv[], int &n){
	for(int i=0; i<n; i++){
		nhap_1_sv(sv[i]);
	}
}
void xuat_1_sv(sinhVien sv){

	cout<<sv.id<<"\t";
	cout<<sv.name<<"\t";
	cout<<sv.subject<<"\t";
	cout<<sv.mark<<endl;
	
}

void xuat_list_sv(sinhVien sv[], int n){
	cout<<"Index	id	name	subjec	mark"<<endl;
	for (int i = 0; i<n; i++){
		cout<<i<<"\t";
		xuat_1_sv(sv[i]);
	}
}

// tim gia tri diem max

float max(sinhVien sv[], int &n){
	int max = sv[0].mark;
	for (int i = 1; i<n; i++)
	{
		if (sv[i].mark > max) max = sv[i].mark;
	}
	return max;
	
}
// xuat cac sinh vien co diem max
void in_sv_max(sinhVien sv[], int n){
	int d_max = max(sv,n);
	cout<<"Index	id	name	subjec	mark"<<endl;
	for (int i =0; i<n; i++){
		if (sv[i].mark == d_max) xuat_1_sv(sv[i]);
	}
}
void insert(sinhVien sv[], int &n, int k){

	for (int i = n-1; i>=k; i--){
		sv[i+1] = sv[i];
	}	
	
	n++;
	nhap_1_sv(sv[k]);
} 


int main(){

	int n;
	cout<<"nhap n: "; cin>>n;
	sinhVien sv[100];
	nhap_list_sv(sv, n);
	xuat_list_sv(sv, n);
	cout<<"kq------------------"<<endl;
	in_sv_max(sv, n);
	insert(sv,n,1);
	xuat_list_sv(sv, n);
	
	
	return 0;
} 
