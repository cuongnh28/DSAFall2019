#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void deQuy(int n){
	if(n==1)	return;
	for(int i=1;i<n;i++){
		a[i]=a[i]+a[i+1];
	}
	cout<<"[";
	for(int i=1;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<"]"<<endl;
	deQuy(n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)	cin>>a[i];
		cout<<"[";
		for(int i=1;i<n;i++){
			cout<<a[i]<<" ";
		}	
		cout<<a[n]<<"]"<<endl;
		deQuy(n);
	}
	return 0;
}
