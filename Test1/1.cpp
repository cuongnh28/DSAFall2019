#include<iostream>
//sai
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		cin>>a;
		int i=a.length()-1;
		while(a[i]=='1'){
			a[i]='0';
			i--;
		}
		if(i>=0)	a[i]='1';
		cout<<a<<endl;
	}
	return 0;
}
