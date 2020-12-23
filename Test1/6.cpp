#include<bits/stdc++.h>
using namespace std;
int t,n,a[11];
bool chuaxet[11];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
	}
}
void in(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			a[i]=j;
			chuaxet[j]=false;
			if(i==n)	in();
			else	Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		init();
		Try(1);
		cout<<endl;
	}
	return 0;
}
