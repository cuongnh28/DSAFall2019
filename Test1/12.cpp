#include<iostream>
using namespace std;
bool ok;
int n,k, a[17];
void init(){
	for(int i=1;i<=n;i++)
			a[i]=0;
}
void in(){
	int dem=0;
	for(int i=1;i<=n;i++)
		if(a[i]==1)	dem++;
	if(dem==k){
		for(int i=1;i<=n;i++)
			cout<<a[i];
		cout<<endl;
	}
}
void sinh(){
	int i=n;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0)	ok=true;
	else{
		a[i]=1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok=false;
		cin>>n>>k;
		init();
		while(!ok){
			in();
			sinh();
		}
	}
	return 0;
}
