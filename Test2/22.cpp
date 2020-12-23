#include<iostream>
using namespace std;
int t,n,a[11][11],kt;
string s;
void init(){
	kt=0;
	s="";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
}
void in(int k){
	for(int i=0;i<k;i++){
		cout<<s[i];
	}
	cout<<" ";
}
void Try(int i,int j,int k){
	if(i==n && j==n){
		kt++;
		in(k);
		return;
	}
	if(a[i+1][j] == 1 && i<n){
		s[k]='D';
		Try(i+1,j,k+1);
	}
	if(a[i][j+1] == 1 && j<n){
		s[k]='R';
		Try(i,j+1,k+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		init();
		if(a[1][1]==0 || a[n][n]==0)	cout<<"-1";
		else{
			Try(1,1,0);
			if(kt==0)	cout<<"-1";
		}
		cout<<endl;
	}
}
