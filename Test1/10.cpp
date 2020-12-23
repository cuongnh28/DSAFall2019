#include<bits/stdc++.h>
using namespace std;
int t;
string b,g;
string sinh(){
	g="";
	g+=b[0];
	for(int i=1;i<b.length();i++){
		int t=(b[i]-'0')^(b[i-1]-'0');
		g+=t+'0';
	}
	return g;
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>b;
		cout<<sinh()<<endl;
	}
	return 0;
}
