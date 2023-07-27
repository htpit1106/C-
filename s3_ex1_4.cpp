#include<iostream>
#include<string>
#include<cctype> 
#include <stdlib.h>
using namespace std;

void bai4(string s){
	int pos = s.find("gmail.com");
	s.insert(pos,"@" );
	cout<<s;
	
	
}

void bai5(string &s){
	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]) && isdigit(s[i+1])&&(atoi(&s[i])%2==0 )&& (atoi(&s[i+1]) % 2==0))
	
					 	s.insert(i+1,"-");
	
	}
} 
int main(){
	string s;
	cout<<"s: "; 
	getline(cin, s);
//	bai4(s);
	bai5(s);
	cout<<s;
	
	
	return 0;
}
