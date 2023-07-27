#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"s: ";
	string s1,s;
	getline(cin, s);
	cout<<"s1: ";
	getline(cin, s1);
	int pos = s.find(s1);
	s.replace(pos,s1.size(), s1);
	cout<<s;
	
	return 0;
}
