#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	long long n,tg,f,s;
	long long sum=0;
	priority_queue< long long, vector<long long>, greater<long long> > pq;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tg;
		pq.push(tg);
	}				
	while(pq.size()>1){
		f=pq.top();	sum=(sum+f)%mod;	pq.pop();
		s=pq.top();	sum=(sum+s)%mod;	pq.pop();
		pq.push((f+s)%mod);
	}
	cout<<sum;
	return 0;
}
