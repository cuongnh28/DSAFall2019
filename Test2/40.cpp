#include<bits/stdc++.h>
using namespace std;
int n,c[16][16],Free[16]={0},tong=0,Min=10000000;
void Init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
		}
	}
}
void Try(int tong, int bd, int dem){
	if(dem<n && tong<Min){
		for(int j=2;j<=n;j++){
			if(!Free[j]){
				Free[j]=1;
				Try(tong+c[bd][j],j,dem+1);
				Free[j]=0;
			}
		}
	}
	else{
		Min=min(Min,tong+c[bd][1]);
	}
}
int main(){
	Init();
	Try(0,1,1);
	cout<<Min;
	return 0;
}

