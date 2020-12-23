#include<bits/stdc++.h>
using namespace std;
bool Ok;
int t,n,a[11];
void init(){
	for(int i=1;i<=n;i++){
		a[i]=n-i+1;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n-1;
	while(a[i]<a[i+1] && i>0)	i--;
	if(i==0)	Ok=true;
	else{
		for(int j=n;j>i;j--){
			if(a[j]<a[i])	{
				swap(a[i],a[j]);
				break;
			}
		}
		int c=i+1,d=n;
		while(d>c)	{
			swap(a[c],a[d]);
			c++;
			d--;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		Ok=false;
		cin>>n;
		init();
		while(!Ok){
			in();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}
