#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int a[21];
		long long x=0,y=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i+=2){
			x=x*10+a[i];
		}
		for(int i=1;i<n;i+=2){
			y=y*10+a[i];
		}
		cout<<x+y<<endl;
	}
	return 0;
}
