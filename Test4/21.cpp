#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long luythua(int n, long long k){
	if(k==1)	return n%mod;
	long long x = luythua(n,k/2);
	if(k%2==0)	return x*x%mod;
	else	return ((n*x)%mod)*x%mod;
}
int main(){
	int t,n; long long k;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>k;
		cout<<luythua(n,k)<<endl;
	}
}
