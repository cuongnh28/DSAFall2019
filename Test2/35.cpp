#include<bits/stdc++.h>
using namespace std;
int n,k,s,dem,c[21];
void Try(int i){
	for(int j=c[i-1]+1;j<=n-k+i;j++){
		c[i]=j;
		if(i==k){
			int tong=0;
			for(int i=1;i<=k;i++){
				tong+=c[i];
			}
			if(tong==s)	dem++;
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k>>s;
	while(n!=0 || k!=0 || s!=0){
		dem=0;
		c[0]=0;
		Try(1);
		cout<<dem<<endl;
		cin>>n>>k>>s;
	}
	return 0;
}
