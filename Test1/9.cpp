#include<bits/stdc++.h>
using namespace std;
int t,n,a[11],b[11];
bool ok;
void init(){
	ok=false;
	cin>>n;
	for(int i=1;i<=n;i++)
		{
			a[i]=0;
			b[i]=0;
		}
}
void sinh(){
	int i=n;
	while(a[i]==1)	{
		a[i]=0;
		i--;
	}
	if(i==0)	ok=true;
	else{
		a[i]=1;
		b[1]=a[1];
		for(int j=2;j<=n;j++){
			b[j]=a[j]^a[j-1];
		}
	}
	
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	cout<<" ";
}
int main(){
	cin>>t;
	while(t--){
		init();
		while(!ok){
			in();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}
