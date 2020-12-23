#include<bits/stdc++.h>
using namespace std;
int dem=0;
bool doc[25],xuoi[25],nguoc[25],a[11];
int n;
void init(){
	for(int i=1;i<=n;i++)
		doc[i]=true;
	for(int i=1;i<=2*n-1;i++){
		xuoi[i]=true;
		nguoc[i]=true;
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(doc[j] && xuoi[i-j+n] &&nguoc[i+j-1]){
			a[i]=j;
			doc[j]=xuoi[i-j+n]=nguoc[i+j-1]=false;
			if(i==n)	dem++;
			else	Try(i+1);
			doc[j]=xuoi[i-j+n]=nguoc[i+j-1]=true;
		}
	}
}
int main(){
	cin>>n;
	init();
	Try(1);
	cout<<dem;
	return 0;
}
