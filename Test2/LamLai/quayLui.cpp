#include<bits/stdc++.h>
using namespace std;
int n,a[15];
bool chuaxet[15];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			a[i]=j;
			chuaxet[j]=false;
			if(i==n)	inkq(); //mac dinh.
			else	Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(){
	int t;	cin>>t;
	while(t--){
		cin>>n;
		memset(chuaxet,true,sizeof(chuaxet));
		Try(1);
	}
}
