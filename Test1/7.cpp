#include<bits/stdc++.h>
using namespace std;
int n,a[11],k;
bool ok;
void init(){
	ok=false;
	cin>>n;
	k=1;
	a[k]=n;
}
void in(){
	cout<<"(";
	for(int i=1;i<=k-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[k]<<") ";
}
void sinh(){
	int i=k,j,r,s,d;
	while(i>0 && a[i]==1)	i--;
	if(i==0)	ok=true;
	else{
		a[i]=a[i]-1;
		d=k-i+1;
		r=d/a[i];
		s=d%a[i];
		k=i;
		if(r>0){
			for(int j=i+1;j<=i+r;j++)
				a[j]=a[i];
			k=k+r;
		}
		if(s>0){
			k=k+1;
			a[k]=s;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		while(!ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
