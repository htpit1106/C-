#include<iostream>
#include<string>
using namespace std;

int dem(string str, int dem = 0)
{
	for (int i = 0; i< str.size(); i++){
		if (isalpha(str[i]))
			dem++;
	}
	return dem;
}

int dequydem(string str, int n){
	if (n<0) return 0;
	
	if (isalpha(str[n])) return dequydem(str,n-1) +1;
	else(dequydem(str, n-1));

}

int main(){
	string str;
	int n = str.size();
	cout<<"Nhap chuoi: ";
	getline(cin,str);
	cout<<dem(str);
	cout<<dequydem(str, str.size());	
	
	return 0;
}
