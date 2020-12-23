#include<iostream>
using namespace std;
bool ok;
int n,k;
int a[16];
void init(){
	for(int i=1;i<=k;i++)
			a[i]=i;
}
void in(){
	for(int i=1;i<=k;i++)
		cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0)	ok=true;
	else{
		a[i]+=1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
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
		cout<<endl;
	}
	return 0;
}
