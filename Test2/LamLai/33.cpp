#include<bits/stdc++.h>
using namespace std;
int n,res;
bool cot[15],xuoi[35],nguoc[35];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j] && xuoi[j+i-1] && nguoc[i-j+n]){
			cot[j]=xuoi[j+i-1]=nguoc[i-j+n]=false;
			if(i==n)	res++;
			else	Try(i+1);
			cot[j]=xuoi[j+i-1]=nguoc[i-j+n]=true;
		}
	}
}
int main(){
	int t;	cin>>t;
	while(t--){
		cin>>n;
		res=0;
		memset(cot,true,sizeof(cot));
		memset(xuoi,true,sizeof(xuoi));
		memset(nguoc,true,sizeof(nguoc));
		Try(1);
		cout<<res<<endl;
	}
}
