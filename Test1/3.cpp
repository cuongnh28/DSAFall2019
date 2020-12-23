#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[1005];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=n-1;
		while(a[i]>a[i+1])	i--;
		if(i>0){
			int j=n;
			while(a[j]<a[i])	j--;
			swap(a[i],a[j]);
			int c=i+1,d=n;
			while(d>c){
				swap(a[c],a[d]);
				d--;
				c++;
			}
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=1;i<=n;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
