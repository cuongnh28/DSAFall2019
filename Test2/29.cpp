#include<bits/stdc++.h>
using namespace std;
int t,m,n,a[101][101];
long long dem;
void Init(){
	dem=0;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
void Try(int i, int j){
	if(i==m-1 && j==n-1)	{dem++; return;}
	if(i<m-1)	Try(i+1,j);
	if(j<n-1)	Try(i,j+1);
}
int main(){
	cin>>t;
	while(t--){
		Init();
		Try(0,0);
		cout<<dem;
		cout<<endl;
	}
}
