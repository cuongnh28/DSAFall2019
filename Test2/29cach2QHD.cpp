#include<bits/stdc++.h>
using namespace std;
int t,m,n,a[101][101],dp[101][101];
long long dem;
void Init(){
	dem=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			dp[i][i]=0;
		}
	}
	dp[1][1]=1;
	dp[0][1]=dp[1][0]=0; 
}
int main(){
	cin>>t;
	while(t--){
		Init();
		for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i==1 &&j==1)	continue;
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
		cout<<dp[m][n]<<endl;
	}
}
