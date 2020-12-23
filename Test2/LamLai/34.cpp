#include<bits/stdc++.h>
using namespace std;
int res,a[10][10],c[10];
bool cot[15],xuoi[35],nguoc[35];
void Try(int i){
	for(int j=1;j<=8;j++){
		if(cot[j] && xuoi[j+i-1] && nguoc[i-j+8]){
			c[i]=j;
			cot[j]=xuoi[j+i-1]=nguoc[i-j+8]=false;
			if(i==8){
				int S=0;
				for(int k=1;k<=8;k++){
					S+=a[k][c[k]];
				}
				res=max(res,S);				
			}	
			else	Try(i+1);
			cot[j]=xuoi[j+i-1]=nguoc[i-j+8]=true;
		}
	}
}
int main(){
	int t;	cin>>t;
	while(t--){
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>a[i][j];
			}
		}
		res=0;
		memset(cot,true,sizeof(cot));
		memset(xuoi,true,sizeof(xuoi));
		memset(nguoc,true,sizeof(nguoc));
		Try(1);
		cout<<res<<endl;
	}
}
