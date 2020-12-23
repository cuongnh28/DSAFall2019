#include<bits/stdc++.h>
using namespace std;
void Solve(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int kt;
	for(int i=0;i<n-1;i++){
		kt=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				kt=1;
				swap(a[j],a[j+1]);
			}
		}
		if(kt){
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
	}
}
int main(){
	int t;	cin>>t;
	while(t--){
		Solve();
	}
}
