#include<iostream>
using namespace std;
int n,k,a[42];
void nhap(){
	for(int i=1;i<=k;i++)
		cin>>a[i];
}
int dem(){
	int i=k,d=0;
	while(a[i]==n-k+i)	{ i--; d++; }
	if(d==0)	return 1;
	else if(d==k)	return k;
	else if(a[i]+2 == a[i+1]){
		return 1;
	}
	else if(a[i+1]-a[i] < a[i]+d+1)	return 2;
	else	return d+1;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		nhap();
		cout<<dem()<<endl;
	}
	return 0;
}
