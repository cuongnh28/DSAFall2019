#include<bits/stdc++.h>
using namespace std;
bool doc[25],xuoi[25],nguoc[25];
int m,a[11],x[11][11];
void init(){
	m=0;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin>>x[i][j];
		}
	}
	for(int i=1;i<=8;i++)
		doc[i]=true;
	for(int i=1;i<=15;i++){
		xuoi[i]=true;
		nguoc[i]=true;
	}
}
void Try(int i){
	for(int j=1;j<=8;j++){
		if(doc[j] && xuoi[i-j+8] &&nguoc[i+j-1]){
			a[i]=j;
			doc[j]=xuoi[i-j+8]=nguoc[i+j-1]=false;
			if(i==8)	{
				int s=0;
				for(int i=1;i<=8;i++){
					s+=x[i][a[i]];
				}
				cout<<s<<" ";
				//if(s>m)	m=s;
			}
			else	Try(i+1);
			doc[j]=xuoi[i-j+8]=nguoc[i+j-1]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){	
		init();
		Try(1);
		//cout<<m<<endl;
	}
	return 0;
}
