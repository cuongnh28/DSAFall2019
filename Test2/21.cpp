#include<bits/stdc++.h>
using namespace std;
int t,n,a[11],b[11];
string s;
void in(){
	for(int i=1;i<=n;i++)
		cout<<s[a[i]-1];
	cout<<" ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!b[j]){
			a[i]=j;
			b[j]=1;
			if(i==n)	in();
			else	Try(i+1);
			b[j]=0;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		n=s.length();
		for(int i=1;i<=n;i++)	b[i]==0;
		Try(1);
		cout<<endl;
	}
	return 0;
}
