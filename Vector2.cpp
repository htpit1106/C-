#include<iostream>

using namespace std;
struct Sinhvien{
	string hoten;
	int msv;
	string  lop;
	int diem;
};
Sinhvien *input(Sinhvien *sv,  int &n){
	cout<<"N = "; cin>>n;
	for (int i =0; i<n; i++){
		cin.ignore();
		cout<<"Ho ten: "; getline(cin, sv[i].hoten);
		cout<<"lop: "; getline(cin, (*(sv+i)).lop);
		cout<<"Ma sinh vien: "; cin>>(*(sv+i)).msv;
		cin.ignore();
		cout<<"Diem: "; cin>>(*(sv+i)).diem;
	}
	return sv;
	
}
Sinhvien *output(Sinhvien   *sv, int n){
	cout<<"danh sach sinh vien: -------";
		for (int i =0; i<n; i++){
		cout<<"\nHo ten: "<<(*(sv+i)).hoten;
		cout<<"\nLop: "<<(*(sv+i)).lop;
		cout<<"\nma sinh vien: "<<(*(sv+i)).msv;
		cout<<"\nDiem: "<<(*(sv +i)).diem; 
	}
	return sv;
}

Sinhvien *findStudentByClass(Sinhvien *sv ,int n){
	cin.ignore(); 
	string Class;
	cout<<"Lop ban muon tim: "; getline(cin, Class);
	for (int i =0; i<n; i++)
		if ((*(sv+i)).lop == Class){
		cout<<"\nHo ten: "<<(*(sv+i)).hoten;
		cout<<"\nLop: "<<(*(sv+i)).lop;
		cout<<"\nma sinh vien: "<<(*(sv+i)).msv;
		cout<<"\nDiem: "<<(*(sv +i)).diem; 
			
		}
	return sv;
}



int main(){
	int n;
	Sinhvien *sv = new Sinhvien[100];
	input(sv, n);
	output(sv,n);
	findStudentByClass(sv, n);
	return 0;
}

