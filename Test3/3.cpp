#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	long long n,t,sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		vector<int> a;
		a.resize(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++){
			sum=(sum+i*a[i])%mod;
		}
		cout<<sum<<endl;
	}
}
