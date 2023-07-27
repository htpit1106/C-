#include<iostream>
using namespace std;
struct Sinhvien{
	string hoten;
	int msv;
	string  lop;
	int diem;
};
void nhap_1_sv(Sinhvien &sv);
Sinhvien *input(Sinhvien *lsv, int &n);
void xuat_1_sv(Sinhvien sv);
void findStudentByClass(Sinhvien *lsv ,int n);
void output(Sinhvien *lsv, int n);
void output(Sinhvien *lsv, int n);
void findStudentByClass(Sinhvien *lsv ,int n);

Sinhvien *insertStudent(Sinhvien *lsv, int &n, int k);

int main(){

	int n;
	cout<<"Nhap n: "; cin>>n;
	Sinhvien *lsv = new Sinhvien[100];
	lsv = input(lsv, n);
	output(lsv, n);
    findStudentByClass(lsv, n);
    int k;
    cout<<"Nhap vi tri chen: "; cin>>k;
    lsv = insertStudent(lsv, n,k);
    output(lsv, n);
	
	
}
void nhap_1_sv(Sinhvien &sv){
		cin.ignore();
		cout<<"Ho ten: "; getline(cin, sv.hoten);
		cout<<"lop: "; getline(cin, sv.lop);
		cout<<"Ma sinh vien: "; cin>>sv.msv;
		cin.ignore();
		cout<<"Diem: "; cin>>sv.diem;
}

void xuat_1_sv(Sinhvien sv){
	cout<<"Ho ten: "<<sv.hoten<<"\t";
	cout<<"lop: "<<sv.lop<<"\t";
	cout<<"Ma sinh vien: "<<sv.msv<<"\t";
	cout<<"Diem: "<<sv.diem<<endl;
	
	
}
Sinhvien *input(Sinhvien *lsv, int &n) {
	for (int i = 0; i<n ; i++)
		nhap_1_sv((*(lsv + i)));
	return lsv;
}
void findStudentByClass(Sinhvien *lsv ,int n){
	cin.ignore(); 
	string Class;
	cout<<"Lop ban muon tim: "; getline(cin, Class);
	
	for (int i = 0; i< n; i++)
		if ((*(lsv + i)).lop == Class) xuat_1_sv((*(lsv + i)));
}
void output(Sinhvien *lsv, int n){
	for (int i = 0; i<n; i++)
		xuat_1_sv((*(lsv+i)));
}

Sinhvien *insertStudent(Sinhvien *lsv, int &n, int k){
	
	for(int i = n; i>k-1; i--){
		(*(lsv +i)) = (*(lsv+i-1));
	} 
	nhap_1_sv((*(lsv+k)));
	n++; 
	return lsv;
}
