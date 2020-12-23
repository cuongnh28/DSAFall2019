#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		priority_queue< long long > a;
		priority_queue< long long, vector<long long>, greater<long long> > b;
		long long tg;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>tg;
			a.push(tg);
		}
		for(int i=0;i<n;i++){
			cin>>tg;
			b.push(tg);
		}
		long long sum=0;
		while(a.size()>0){
			sum=sum+a.top()*b.top();
			a.pop();
			b.pop();
		}		
		cout<<sum<<endl;
	}
}
