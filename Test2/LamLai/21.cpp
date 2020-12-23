#include<bits/stdc++.h>
using namespace std;
string s,str;
int n,a[15];
bool chuaxet[15];
void Try(int i){
	for(int j=0;j<n;j++){
		if(chuaxet[j]){
			str+=s[j];
			chuaxet[j]=false;
			if(i==n-1)	cout<<str<<" ";
			else	Try(i+1);
			chuaxet[j]=true;
			str.erase(str.end()-1);
		}
	}
}
int main(){
	int t;	cin>>t;
	while(t--){
		str="";
		cin>>s;
		n=s.length();
		for(int i=0;i<=n;i++)
			chuaxet[i]=true;
		Try(0);
		cout<<endl;
	}
}
