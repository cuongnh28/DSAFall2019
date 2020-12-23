#include<bits/stdc++.h>
using namespace std;
int t;
string b,g;
string sinh(){
	b="";
	b+=g[0];
	for(int i=1;i<g.length();i++){
		int t=(g[i]-'0')^(b[i-1]-'0');
		b+=t+'0';
	}
	return b;
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>g;
		cout<<sinh()<<endl;
	}
	return 0;
}
